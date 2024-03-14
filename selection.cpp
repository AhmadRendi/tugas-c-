#include<iostream>

using namespace std;


int main(){



    int i;
    int k;

    cout << "masukan angka pertama : "; cin >> i;

    cout << "masukan angka kedua : "; cin >> k;


    if(i < k){
        cout << "angka " << i << " lebih kecil dari angka " << k << endl;
    }
    if( i > k){
        cout << "angka " << i << " lebih besar dari angka " << k  << endl;
    }if (i == k) {
        cout << "angka " << i << "dan " << k << " sama besarnya" << endl;
    }

}