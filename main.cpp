#include<iostream>
#include<vector>

using namespace std;


struct Mahasiswa
{
    /* data */
    private :
    string name;
    string nim;

    public :
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }

    void setNim(string nim){
        this->nim = nim;
    }

    string getNim(){
        return this->nim;
    }
};


struct Bem : public Mahasiswa
{
    /* data */

    private :
    string jabatan;

    public :
    void setJabatan(string jabatan){
        this->jabatan = jabatan;
    }

    string getJabatan(){
        return this->jabatan;
    }

};


int &fungsi(){
    static int nilai = 242;
    return nilai;
}


int main(){


    // char pilih;

    // int n = 0xe;
    // cout << n << endl;

    // int ganti = 1;

    // fungsi() = ganti;

    // ganti = fungsi();

    // cout << fungsi() << endl;


    string name = "Ahmad Rendi";

    // cout << name[1] << endl;

    cout << "Ahmad Rendi" << endl;

    // pilih = 'c';

    // switch (pilih)
    // {
    // case 'c' :
    // cout << "masukan satu" << endl;
    // break;
    // case 'C' : 
    // cout << "masukan dua" << endl;
    // break;
    // default:
    //     break;
    // }

    // Bem m;

    // m.setName("Ahmad Rendi");
    // m.setNim("13020210048");
    // m.setJabatan("Ketua Badan Eksekutif Mahasiswa");

    // cout << "nama \t\t: " << m.getName() << endl;
    // cout << "nim \t\t: " << m.getNim() << endl;
    // cout << "jabatan \t: " << m.getJabatan() << endl;
    

    // int number = 20;


    // cout << "ini adalah nilai variable local : " << number << endl;

    // cout << "ini adalah nilai variable global : " << ::number << endl;


    // string name;

    // cout << "masukan nama : "; cin >> name;

    // cout << "nama saya adalah : " << name << endl;

    // vector<string> name;


    // name.push_back("name");
    // name.push_back("Ahmad Rendi");


    // for (string value : name){
    //     cout << value << endl;
    // }


    // cout << "setelah di pop" << endl;

    // name.pop_back();
    // name.pop_back();
    // // name.pop_back();

    // for (string value : name){
    //     cout << value << endl;
    // }

    // int i;

    // cout << i++ << endl;
    // cout << i++ << endl;

    // int a;
    // cout << ++a << endl;
    // cout << ++a << endl;

    // int pilih;

    // do{
    //     cout << "masukan nilai : "; cin >> pilih;
    //     if(pilih == 1){
    //         cout << "nilai yang anda masuka adalah : " << pilih << endl;
    //     }else {
    //         cout << "nilai yang anda masukan selain satu adalah : " << pilih << endl;
    //     }
    // }while(pilih < 3);

    // int pilihan = 10;

    // do{
    //     if(pilihan == 1){
    //         cout << "nilai yang anda masuka adalah : " << pilihan << endl;
    //     }else {
    //         cout << "nilai yang anda masukan selain satu adalah : " << pilihan << endl;
    //     }
    //     cout << "masukan nilai : "; cin >> pilihan;
    // }while(pilihan < 3);


    // for (int i = 0; i <= 5; i++){
    //     i == 2;
    //     for(int k = 0; k < 4; k++){
    //         k == 3;
    //         for(int j = 0; j < 2; j++){
    //             cout << "hello word" << endl;
    //         }

    //         cout << "====" << endl;
    //     }
    //     cout << "========" << endl;
    // }

    return 0;
}