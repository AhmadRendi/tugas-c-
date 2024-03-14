#include<iostream>

using namespace std;


const int MAX_STACK = 10;

struct Stack{
    int element[MAX_STACK];
    int top;
};

void createStack(Stack& stack){
    stack.top = -1;
}

bool isEmpty(Stack stack){
    return stack.top == -1;
}

bool isFull(Stack stack){
    return stack.top == MAX_STACK-1;
}

void push(Stack& stack, int nilai){
    if(isFull(stack)){
        cout << "full" << endl;
    }else {
        stack.top++;
        stack.element[stack.top] = nilai;
    }
   
}

void pop(Stack& stack){
    // for (int i = 0; i < 1; i++){
        // if(stack.element[i] == nilai){
        //     nilai = stack.element[stack.top];
            stack.top--;
        // }else {
        //     cout << "data tidak tersedia" << endl;
        // }
    // }
   
}

void toEmptyInStack(Stack& stack){
    while(!isEmpty(stack)){
        stack.top--;
    }
}

void showsValueInStack(Stack stack){
    int length = stack.top + 1;
    
    if(stack.top == -1){
        cout << "tidak ada data" << endl;
    }else {
        for(int i = 0; i < length; i++){
            cout << stack.element[i] << endl;
        }
    }
}

void showMenu(){
    cout << "1. Push Data \n2. Pop Data\n";
    cout << "3. Tampil Isi Stack \n4. Kosongkan Stack \n";
    cout << "5. Keluar \n";
}
int main(){

    Stack stack;
    createStack(stack);
    cout << stack.top << endl;
    int nilai;
    int pil;
    string pilih;

    while (pil < 5){
        showMenu();
        cout << "masukan pilihan : "; cin >> pilih;

        if(pilih == "1"){
            cout << "masukan nilai : "; cin >> nilai;
            push(stack, nilai);
        }else if(pilih == "2"){
            pop(stack);
        }else if(pilih == "3"){
            cout << "Data" << endl;
            showsValueInStack(stack);
        }else if(pilih == "4"){
            toEmptyInStack(stack);
        }else if(pilih == "5"){
            pil = stoi(pilih);
        }else {
            cout << "menu tidak tersedia" << endl;
        }
    }

}