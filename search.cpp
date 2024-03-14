#include<iostream>

using namespace std;


int main(){


    int umur;
    int n;
    cout << "masukan jumlah : "; cin >> n;
    int j[n + 1];

    int m = sizeof(j) + sizeof(j[0]);

    for (int i = 0; i < m; i++){
        if (i == 0){
            cout << "masukan umur saya : "; cin >> umur;
            j[i] = umur;
        }
        cout << "masukan umur : "; cin >> j[i];
    }

    for (int i = 0; i < m; i++){
        cout << j[i] << endl;
    }
  
    return 0;

}