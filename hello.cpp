#include <iostream>
#include <iterator>

using namespace std;

int hargaCoto = 12000;
int hargaLalapan = 18000;
int hargaNasiGoreng = 15000;
int hargaPisang = 20000;

int pilih = 1;

void canBuy(int uang)
{
    cout << "sisa uang : " << uang << endl;
    cout << endl;
    if (uang >= hargaCoto)
    {
        cout << "beli coto harga : " << hargaCoto << endl;
    }
    if (uang >= hargaLalapan)
    {
        cout << "beli lalapan harga : " << hargaLalapan << endl;
    }
    if (uang >= hargaNasiGoreng)
    {
        cout << "beli nasi goreng harga : " << hargaNasiGoreng << endl;
    }
    if (uang >= hargaPisang)
    {
        cout << "beli pisang harga " << hargaPisang << endl;
    }
}

int main(int argc, char const *argv[])
{
    /* code */

    int sisaUang = 40000;

    do
    {

        if (pilih == 1)
        {
            if (sisaUang >= hargaCoto)
            {
                cout << endl;
                canBuy(sisaUang);
                cout << endl;
                cout << "beli coto harga : " << hargaCoto << endl;
                cout << "1. beli \n2. tidak \nbeli ?";
                cin >> pilih;
                if (pilih == 1)
                {
                    sisaUang = sisaUang - hargaCoto;
                    pilih = 0;
                }else {
                    cout << endl;
                }
                cout << endl;
                system("clear");
            }
            if (sisaUang >= hargaLalapan)
            {
                cout << endl;
                canBuy(sisaUang);
                cout << endl;
                cout << endl;
                cout << "beli lalapan harga : " << hargaLalapan << endl;
                cout << "1. beli \n2. tidak \nbeli ?";
                cin >> pilih;
                if (pilih == 1)
                {
                    sisaUang = sisaUang - hargaLalapan;
                    pilih = 0;
                }else {
                    cout << endl;
                }
                cout << endl;
                system("clear");
            }
            if (sisaUang >= hargaNasiGoreng)
            {
                cout << endl;
                canBuy(sisaUang);
                cout << endl;
                cout << "beli nasi goreng harga : " << hargaNasiGoreng << endl;
                cout << "1. beli \n2. tidak \nbeli ?";
                cin >> pilih;
                if (pilih == 1)
                {
                    sisaUang = sisaUang - hargaNasiGoreng;
                    pilih = 0;
                }else {
                    cout << endl;
                }
                cout << endl;
                system("clear");
            }
            if (sisaUang >= hargaPisang)
            {
                cout << endl;
                canBuy(sisaUang);
                cout << endl;
                cout << "beli pisang harga " << hargaPisang << endl;
                cout << "1. beli \n2. tidak \nbeli ?";
                cin >> pilih;
                if (pilih == 1)
                {
                    sisaUang = sisaUang - hargaPisang;
                }else {
                    cout << endl;
                }
                cout << endl;
                system("clear");
            }
        }
        cout << "uang anda masih tersisa : " << sisaUang << endl;


        cout << "1. lanjut belanja \n2. keluar jangan habiskan uangmu! \n"
             << endl;
        cout << "pilih : ";
        cin >> pilih;

    } while (pilih <= 1);

    return 0;
}
