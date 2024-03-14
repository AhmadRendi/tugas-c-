#include<iostream>

using namespace std;


int main(){

    int wo;
    int fo;

    cout << "masukan nilai row : "; cin >> wo;
    cout << "masukan nilai colum : "; cin >> fo;

    cout << endl;

    int row[wo][fo];
    int column[wo][fo];
    int hasil[wo][fo];

    cout << "inputkan data matrix pertama" << endl;
    for (int i = 0; i < wo; i++){
        for (int k = 0; k < fo; k++){
            cout << "input data : "; cin >> row[i][k];
        }
    }

    cout << endl;

    cout << "masukan data matrix kedua" << endl;
    for (int i = 0; i < wo; i++){
        for (int k = 0; k < fo; k++){
            cout << "input data : "; cin >> column[i][k];
        }
    }

    cout << endl;

    for(int i = 0; i < wo; i++){
        for(int k = 0; k < fo; k++){
            hasil[i][k] = row[i][k] + column[i][k];
        }
    }

    cout << "bentuk matriks" << endl;

    for (int i = 0; i < wo; i++){
        for (int k = 0; k < fo; k++){
            cout << hasil[i][k] << " ";
        }
        cout << endl;
    }


    return 0;
}