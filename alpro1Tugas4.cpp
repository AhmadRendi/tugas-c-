#include<iostream>

using namespace std;

void menu(){
    cout << "=================================" << endl;
    cout << "========ini perkalian============" << endl;
}

float hitung(float a, float b){
    return a * b;
}

void tampilkan(float a,float b){
    cout << "hasil jumlah : " << hitung(a,b) << endl;
}

int main(){


    float a, b;
    menu();
    cout << "masukan nilai a : "; cin >> a;
    cout << "masukan nilai b : "; cin >> b;
    tampilkan(a, b);

}