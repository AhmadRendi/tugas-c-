#include<iostream>

using namespace std;


int main(){

    int jml[] = {1,2,5,6,9,11,10};

    int n = sizeof(jml) / sizeof(jml[0]);

    for(int i = 0; i < 1; i++){
        for (int k = 0; k < n; k++){
            if((jml[k] % 2) == 0){
                cout << jml[k] << " ";
            }
        }
        cout << " genap" <<endl;
        for(int k = 0; k < n; k++){
            if((jml[k] % 2) != 0){
                cout << jml[k] << " ";
            }
        }
        cout << " genjil" << endl;
    }

    return 0;
}