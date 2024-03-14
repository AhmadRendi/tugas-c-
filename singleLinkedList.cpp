#include<iostream>

using namespace std;

int afterDelete;

struct Node{
int data;
Node *next;
};
// Node *n=NULL, *head=NULL, *tail=NULL, *x=NULL, *afterDelete=NULL;
Node *n=NULL, *head=NULL, *tail=NULL, *x=NULL;

bool isEmpty(){
    x = head;
    if(x != NULL){
        return true;
    }else {
        return false;
    }
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

// void buatNodeAwal(int i){
// n = new Node;
// n->data = i;
// tail = n;
// head = n;
// tail->next = NULL;
// }

void createNodeFirst(string nilai){
    if(inputIsValid(nilai)){
        if(head == NULL){
            n = new Node;
            int value = stoi(nilai);
            n->data = value;
            tail = n;
            head = n;
            tail->next = NULL;
        }else {
            cout << "Node telah tersedia" << endl;
        }
        
    }else {
        cout << "input is not valid" << endl;
    }
}


// void tambahDiBelakang(int i){
// n = new Node;
// n->data = i;
// tail->next = n;
// tail = n;
// tail->next = NULL;
// }

void addAtTheBack(string nilai){
    if(inputIsValid(nilai)){
        n = new Node;
        int value = stoi(nilai);
        n->data = value;
        tail->next = n;
        tail = n;
        tail->next = NULL;
    }else {
        cout << "input is not valid" << endl;
    }
}


// void tambahDiDepan(int i){
// n = new Node;
// n->data = i;
// n->next = head;
// head = n;
// }

void addInFront(string nilai){
    if(inputIsValid(nilai)){
        n = new Node;
        int value = stoi(nilai);
        n->data = value;
        n->next = head;
        head = n;
    }else {
        cout << "input is not valid" << endl;
    }
}

// void tambahDiTengah(int i, int j){
// x = head;
// while(x->data != j) x = x->next;
// n = new Node;
// n->data = i;
// n->next = x->next;
// x->next = n;
// }

void addInMidle(string nilai, string after){
    x = head;
    if(inputIsValid(nilai) && inputIsValid(after)){
        int j = stoi(after);
        while(x->data != j){
            x = x->next;
        }
        int value = stoi(nilai);
        n = new Node;
        n->data = value;
        n->next = x->next;
        x->next = n;
    }else {
        cout << "input is not valid" << endl;
    }
}

// void hapusDiDepan(){
// x =head;
// head = head->next;
// delete(x);
// }


void hapusDiDepan(){
     x = head;
    if(isEmpty()){
        head = head->next;
        afterDelete = x->data;
        delete(x);
    }
}

void deleteInFront(){
    x = head;
    if(isEmpty()){
        head = head->next;
        delete(x);
    }else{
        cout << "data is empty" << endl;
    }
}

// void hapusDiBelakang(){
// x =head;
// while(x->next != tail) x=x->next;
// tail = x;
// delete(x->next);
// tail->next = NULL;
// }

void deleteAtTheBack(){
    x = head;
    if(isEmpty()){
        while(x->next != tail){
            x = x->next;
        }
        tail = x;
        delete(x->next);
        tail->next = NULL;
    }else {
        cout << "data is empty" << endl;
    }
}


// void hapusDiTengah(int i){
// Node *temp=NULL;
// x = head;
// while(x->data != i){
// temp = x;
// x = x->next;
// }
// temp->next = x->next;
// delete(x);
// }   

void deleteDataInTheMidle(string nilai){
    Node *temp = NULL;
    x = head;
    if(inputIsValid(nilai)){
        if(isEmpty()){
            int value = stoi(nilai);
            while(x->data != value){
                temp = x;
                x = x->next;
            }
            temp->next = x->next;
            delete(x);
        }else {
            cout << "data is empty" << endl;
        }
    }else {
        cout << "input is not valid" << endl;
    }
}



void viewData(){
    x = head;

    if(isEmpty()){
        while(x != NULL){
            cout << x->data << " ";
            x = x->next;
        }
        cout << endl;
    }else {
        cout << "data is empty" << endl;
    }
}
void viewData1(){
    x = head;

    if(isEmpty()){
        while(x != NULL){
            cout << x->data << " ";
            x = x->next;
        }
        cout << endl;
        if(afterDelete != 0){
            cout << "node yang terakhir dihapus : " << afterDelete << endl;
        }
    }else {
        cout << "data is empty" << endl;
    }
}



// void tampilData(){
// x=head;
// while(x!=NULL){
// cout << x->data << " ";
// x= x->next;
// }
// }


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
     cout << "Pilihan \n1. tampil node dari depan \n2. tampil node dari dibelakang \n4. Batal" << endl;
}


void deleteNode(string pilih2){
    string nilai, nilai2;
    int pilih;
    if(inputIsValid(pilih2)){
        pilih = stoi(pilih2);
        switch(pilih){
            case 1 :
                deleteInFront();
                hapusDiDepan();
                break;
            case 2 :
                deleteAtTheBack();
                break;
            case 3 :
                viewData();
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

void inputNode(string pilih2){
    string nilai, nilai2;
    int pilih;
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
                cout << "masukan nilai : "; cin >> nilai;
                viewData();
                cout << "masukan nilai setelah nilai : "; cin >> nilai2;
                addInMidle(nilai, nilai2);
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
                    createNodeFirst(nilai);
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
                case 4 :
                    cout << "list data :" << endl;
                    viewData();
                    break;
            }
        }else {
            cout << "pilihan tidak tersedia" << endl;
        }

        pilihan = stoi(pil);
    }

}


void menuMid(){
    cout << "Menu \n1. Buat Node Baru \n2. Tambah Node \n3. Hapus Node \n4. Tampilakan seluruh Node \n5. keluar" << endl;
}

void midPraktikum(){

    string pil, nilai, pilih2;
    int pilihan, pilih;


    while(pilihan != 5){
        // menuFirst();
        menuMid();
        cout << "masukan pilihan : "; cin >> pil;
        system("clear");
        if(inputIsValid(pil)){

            pilih = stoi(pil);

            switch(pilih){
                case 1 :
                    cout << "masukan nilai : "; cin >> nilai;
                    createNodeFirst(nilai);
                    pilihan = stoi(pil);
                    break;
                case 2 :
                    cout << "masukan nilai : "; cin >> nilai;
                    if(isEmpty()){
                        addInFront(nilai);
                    }else {
                        cout << "node belum tersedia" << endl;
                    }
                    pilihan = stoi(pil);
                    break;
                case 3 :
                    hapusDiDepan();
                    pilihan = stoi(pil);
                    break;
                case 4 :
                    cout << "list data :" << endl;
                    viewData1();
                    pilihan = stoi(pil);
                    break;
                case 5 :
                    cout << "terima kasih" << endl;
                    pilihan = stoi(pil);
                    break;
                default :
                    cout << "pilihan tidak tersedia" << endl;
                    pilihan = stoi(pil);
                    break;
            }
        }else {
            cout << "pilihan tidak tersedia" << endl;
        }   
    }

}


int main(){

    midPraktikum();

    // run();


    // string nilai, nilai2; 
    // viewData();
    // createNodeFirst("8");
    // addInFront("9");
    // addInFront("3");
    // addInFront("15");
    // viewData();
    // addAtTheBack("35");
    // viewData();
    // cout << "masukan data ditengah : "; cin >> nilai;
    // cout << "masukan data seteleh : "; cin >> nilai2;
    // addInMidle(nilai, nilai2);
    // viewData(); 
    // deleteAtTheBack();
    // deleteInFront();
    // cout << "data setelah dihapus didepan dan dibelang " << endl;
    // viewData();

    
    return 0;
}