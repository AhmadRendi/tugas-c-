#include <iostream> 

using namespace std;



int main(){

    int i; 
    // cout << "masukan nilai L : "; cin >> i;

    // system("clear");
    // cout << "nilai : " << i << endl;


    string name;

    cout << "masukan nama : "; getline(cin, name);

    cout << "nama inputan : " << name << endl;

    cout << "masukan nilai : "; cin >> i;

    cout << "nilai yang anda masukan adalah : " << i << endl;

    getline(cin, name);
    cout << "masukan nama : "; getline(cin, name);

    cout << "nama inputan : " << name << endl;

    cout << "masukna nilai : "; cin >> i;

    cout << "nilai yang ada masukan adalah : " << i << endl;
}