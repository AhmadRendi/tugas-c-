#include<iostream>

using namespace std;



void segitiga(int ukuran){
    for (int i = 0; i < ukuran; i++){
        for (int k = 0; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
}

void segitigaTerbalik(int ukuran){
    for(int i = 0; i < 5; i++){
        for(int k = ukuran; k > i; k--){
            cout << "*";
        }
        cout << endl;
    }
}

void segitigaWhile(int ukuran){
    
    int i = 1;
    while(i <= ukuran){
        int k = 0;
        while(k < i){
            if(k == 0){
                cout << "*";
            } else if(i == ukuran){
                cout << "*";
            }else if(k == i-1){
                cout << "*";
            }else {
                cout << " ";
            }    
            k++;
        }
        cout << endl;
        i ++;
    }

    // int i = 1;
    // while(i <= ukuran){
    //     int k = 0;
    //     while(k < i){

    //         if(i == ukuran){
    //             cout << "*";
    //         }else if(k == 0 || k == i-1){
    //             cout << "*";
    //         }else {
    //             cout << " ";
    //         }   
    //         k++;
    //     }
    //     cout << endl;
    //     i ++;
    // }
}

int main(){

    int ukuran;

    cout << "ukuran : "; cin >> ukuran;
    
    cout << endl;

    // segitiga(ukuran);

    cout << endl;
    segitigaTerbalik(ukuran);
    cout << endl;
    // segitiga(ukuran);
    segitigaWhile(ukuran);

}