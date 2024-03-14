#include<iostream>

using namespace std;

struct Node{
int data;
Node *next;
Node *prev;
};
Node *n=NULL, *head=NULL, *tail=NULL, *x=NULL;

bool isEmpty(){
    return head != NULL;
    // x = head;
    // if(x != NULL){
    //     return true;
    // }else {
    //     return false;
    // }
}

bool inputIsValid(string value){
     for (char c : value){
        if(!isdigit(c)){
            return false;
            break;
        }
    }
    return true;
}

// void buatNodeBaru(int i){
// n = new Node;
// n->data = i;
// n->prev = NULL;
// head = n;
// tail = n;
// tail->next = NULL;
// }

void viewInputanNotVali(){
    cout << "inputan not valid" << endl;
}

void createNewNode(string value){
    if(inputIsValid(value)){
        int i = stoi(value);
        if(!isEmpty()){
            n = new Node;
            n->data = i;
            n->prev = NULL;
            head = n;
            tail = n;
            tail->next = NULL;
        }else {
            cout << "node telah tersedia" << endl;
        }
    }else {
        viewInputanNotVali();
    }
}

// void tambahDiBelakang(int i){
// n = new Node;
// n->data = i;
// n->prev = tail;
// tail->next = n;
// tail = n;
// tail->next = NULL;
// }

void addAtTheBack(string value){
    if(inputIsValid(value)){
        int i = stoi(value);
        n = new Node;
        n->data = i;
        n->prev = tail;
        tail->next = n;
        tail = n;
        tail->next = NULL;
    }else {
        viewInputanNotVali();
    }
}

// void tambahDiDepan(int i){
// n = new Node;
// n->data = i;
// n->next = head;
// head->prev = n;
// n->prev = NULL;
// head = n;
// }

void addInFront(string value){
    if(inputIsValid(value)){
        int i = stoi(value);
        n = new Node;
        n->data = i;
        n->next = head;
        head->prev = n;
        n->prev = NULL;
        head = n;
    }else {
        viewInputanNotVali();
    }
}

// void tambahDiTengah(int i, int j){
// x = head;
// while(x->data != j) x=x->next;
// n = new Node;
// n->data = i;
// n->next = x->next;
// x->next = n;
// n->prev = x;
// x = n->next;
// x->prev = n;
// }

int lengthHead(){
    int length = 0;
    x = head;
    while(x != nullptr){
        length++;
        x = x->next;
    }
    return length;
}

void addInMidle(string value, string value2){
    if(inputIsValid(value) && inputIsValid(value2)){
        x = head;
        int le;
        int i = stoi(value);
        int j = stoi(value2);
        while(x->data != j){
            x = x->next;
        }
        n = new Node;
        n-> data = i;
        n-> next = x-> next;
        x->next = n;
        n->prev = x;
        x = n->next;
        x->prev = n;
    }else {
        viewInputanNotVali();
    }
}

// void hapusDiDepan(){
// x = head;
// head = x->next;
// head->prev = NULL;
// delete(x);
// x = NULL;
// }

void viewDataIsEmpty(){
    cout << "data is empty" << endl;
}

void deleteInFront(){
    if(isEmpty()){
        x = head;
        head = x->next;
        head->prev = NULL;
        delete(x);
        x = NULL;
    }else {
        viewDataIsEmpty();
    }
}

// void hapusDiBelakang(){
// x = tail;
// tail = tail->prev;
// tail->next = NULL;
// delete(x);
// x = NULL;
// }

void deleteAtTheBack(){
    if(isEmpty()){
        x = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete(x);
        x = NULL;
    }else {
        viewDataIsEmpty();
    }
}

void hapusDiTengah(int i){
    n = NULL;
    x = head;
    while(x->data != i){
        n = x;
        x = x->next;
    }
    n->next = x->next;
    x = x->next;
    delete(x->prev);
    x->prev = n;
}

bool isFound(int value){
    x = head;
    while(x != NULL){
        if(x->data == value){
            return true;
        }
        x = x->next;
    }
    return false;
}

void deleteDataInTheMidle(string value){
    if(inputIsValid(value)){
        x = head;
        int k = stoi(value);
        if(isEmpty()){
            for(int i = 0; i < lengthHead(); i++){
                if(isFound(k)){
                    hapusDiTengah(k);
                    break;
                }else {
                    if(i == (lengthHead()-1)){
                        cout << "data tidak ditemukan" << endl;
                    }
                }
            }
        }else {
            viewDataIsEmpty();
        }
    }else {
        viewInputanNotVali();
    }
}

// void tampilDariDepan(){
// x = head;
// while(x != NULL){
// cout << x->data << " ";
// x = x->next;
// }
// }

void viewDataFromFront(){
    if(isEmpty()){
        x = head;
        while(x != NULL){
            cout << x->data << " ";
            x = x->next;
        }
    }else {
        viewDataIsEmpty();
    }
}

// void tampilDariBelakang(){
// x = tail;
// while(x != NULL){
// cout << x->data << " ";
// x = x->prev;
// }
// }
void viewDataAtTheBack(){
    if(isEmpty()){
        x = tail;
        while(x != NULL){
            cout << x->data << " ";
            x = x->prev;
        }
    }else {
        viewDataIsEmpty();
    }
}

void menuFirst(){
    cout << "Menu \n1. Create Node First \n2. Add Node \n3. Delete Node \n";
    cout << "4. Show Data \n5. Exit" << endl;
}

void menuAddNode(){
    cout << "Pilihan \n1. Tambah node di depan \n2. Tambah node dibelakang \n3. Tambah node ditengah \n4. Batal" << endl;
}

void menuDeleteNode(){
     cout << "Pilihan \n1. hapus node di depan \n2. hapus node dibelakang \n3. hapus node ditengah \n4. Batal" << endl;
}

void menuViewListData(){
     cout << "Pilihan \n1. tampil node dari depan \n2. tampil node dari dibelakang \n3. Batal" << endl;
}

void selectViewData(string pilih){

    int pilih2;
    if(inputIsValid(pilih)){
        pilih2 = stoi(pilih);
        switch(pilih2){
            case 1 :
                cout << "list data : " << endl;
                viewDataFromFront();
                break;
            case 2 :
                cout << "list data : " << endl;
                viewDataAtTheBack();
                break;
            case 3 :
                cout << "batal" << endl;
                break;
            default :
                cout << "pilihan tidak tersedia" << endl;
        }
    }
}

void inputNode(string pilih2){
    string nilai, nilai2;
    int pilih;
    if(isEmpty()){
        if(inputIsValid(pilih2)){
        pilih = stoi(pilih2);
        switch(pilih){
            case 1 :
                cout << "masukan nilai : "; cin >> nilai;
                addInFront(nilai);
                break;
            case 2 :
                cout << "masukan nilai : "; cin >> nilai;
                addAtTheBack(nilai);
                break;
            case 3 :
                if(lengthHead() < 2){
                    cout << "data harus lebih dari satu " << endl;
                }else {
                     cout << "masukan nilai : "; cin >> nilai;
                    viewDataFromFront();
                    cout << endl;
                    cout << "masukan nilai setelah nilai : "; cin >> nilai2;
                    addInMidle(nilai, nilai2);
                }
                break;
            case 4 :
                cout << "batal" << endl;
                break;
            default :
                cout << "menu tidak tersedia" << endl;
                break;
        }
        }else {
        cout << "inputan is not valid" << endl; 
        }
    }else {
        cout << "buat node baru terlebih dahulu" << endl;
    }
    
}

void deleteNode(string pilih2){
    string nilai, nilai2;
    int pilih;
    if(inputIsValid(pilih2)){
        pilih = stoi(pilih2);
        switch(pilih){
            case 1 :
                deleteInFront();
                break;
            case 2 :
                deleteAtTheBack();
                break;
            case 3 :
                // viewDataFromFront();
                cout << "masukan nilai : "; cin >> nilai;
                deleteDataInTheMidle(nilai);
                break;
            case 4 :
                cout << "batal" << endl;
                break;
            default :
                cout << "menu tidak tersedia" << endl;
                break;
        }
    }else {
        cout << "inputan is not valid" << endl; 
    }
}

void run(){
    
    string pil, nilai, pilih2;
    int pilihan, pilih;


    while(pilihan != 5){
        menuFirst();
        cout << "masukan pilihan : "; cin >> pil;
        system("clear");
        if(inputIsValid(pil)){

            pilih = stoi(pil);

            switch(pilih){
                case 1 :
                    cout << "masukan nilai : "; cin >> nilai;
                    createNewNode(nilai);
                    break;
                case 2 :
                    menuAddNode();
                    cout << "masukan pilihan : "; cin >> pilih2;
                    inputNode(pilih2);
                    break;
                case 3 :
                    menuDeleteNode();
                    cout << "masukan pilihan : "; cin >> pilih2;
                    deleteNode(pilih2);
                    break;
                case 4 :
                    menuViewListData();
                    cout << "masukan pilihan : "; cin >> pilih2;
                    selectViewData(pilih2);
                    cout << endl;
                    break;
                case 5 :
                    cout << "terima kasih" << endl;
                    pilihan = stoi(pil);
                    break;
                default :
                    cout << "pilihan tidak tersedia 1" << endl;
            }
        }else {
            cout << "pilihan tidak tersedia" << endl;
            pilihan = 0;
        }
    }

}

int main(){

    run();
}