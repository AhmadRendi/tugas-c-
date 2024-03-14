#include <iostream>
#include <vector>

using namespace std;

bool konfirmasi;

const int MAX_QUEUE = 1000;

vector<string> listPembelianTiket;

struct Queue
{
    string elemen[MAX_QUEUE];
    int rear;
    int front;
    int jml;
};

void createQ(Queue &q)
{
    q.front = 0;
    q.rear = -1;
    q.jml = 0;
}

bool isFull(Queue q)
{
    return q.jml == MAX_QUEUE;
}

bool isEmpty(Queue q)
{
    return q.jml == 0;
}

void enQ(Queue &q, string i)
{
    if (isFull(q))
    {
        cout << "tiket telah habis\n\n";
    }
    q.rear++;
    q.jml++;
    q.elemen[q.rear] = i;
}

void deQ(Queue &q, string &name)
{
    if (isEmpty(q))
    {
        cout << "antriant telah kosong \n" << endl;
    }
    int n = sizeof(q.elemen) / sizeof(q.elemen[0]);
    for (int i = 0; i < n; i++)
    {
        if (q.elemen[i] == name)
        {
            listPembelianTiket.push_back(q.elemen[i]);
            q.front++;
            q.jml--;
            break;
        }
        else
        {
            if(i == n - 1){
                 cout << "name tidak ditemukan" << endl;
            }
        }
    }
}

void del(Queue &q, string name)
{
    int n = sizeof(q.elemen) / sizeof(q.elemen[0]);
    for (int i = 0; i < n; i++)
    {
        if (q.elemen[i] == name)
        {
            q.elemen[i] = "";
            q.elemen[i] = q.elemen[q.front];
            q.front++;
            q.jml--;
            break;
        }
        else
        {
             if(i == n - 1){
                 cout << "name tidak ditemukan\n" << endl;
            }
        }
    }
}


void menu()
{
    cout << "1. pesan tiket \n2. batalkan tiket\n\n";
}

void role()
{
    cout << "1. pembeli \n2. petugas \n\n";
}
void menuPetugas()
{
    cout << "1. konfirmasi pembelian tiket \n2. list pembelian tiket" << endl;
}

int main()
{

    Queue q;
    createQ(q);

    string pilih;
    int pilihan;
    string name;
    int sandi;
    int code = 159;

    while (pilihan <= 2)
    {
        /* code */
        cout << "\n\n";
        role();
        cout << "masuk sebagai : ";
        cin >> pilih;

        if (pilih == "1")
        {
            menu();
            cout << "masukan pilihan : ";
            cin >> pilih;
            if (pilih == "1")
            {
                cout << "jumlah " << q.jml << endl;
                for (int i = 0; i < 1; i++)
                {
                    cout << "masukan nama : ";
                    cin >> name;
                    cout << "\n\n";
                    enQ(q, name);
                }
            }
            else if (pilih == "2")
            {
                cout << "masukan nama yang akan dihapus : ";
                cin >> name;
                del(q, name);
            }
            else
            {
                cout << "maaf menu tidak tersedia\n" << endl;
            }
        }
        else if (pilih == "2")
        {
            cout << "masukan sandi : ";
            cin >> sandi;
            if (sandi == code)
            {
                menuPetugas();
                cout << "masukan pilihan : ";
                cin >> pilih;
                if (pilih == "1")
                {
                    cout << "masukan name : ";
                    cin >> name;
                    deQ(q, name);
                }
                else if (pilih == "2")
                {

                    cout << "nama yang telah dikonfirmasi" << endl;
                    int i;
                    for (string value : listPembelianTiket)
                    {
                        i++;
                        cout << i << ". " << value << endl;
                    }
                }
                else
                {
                    cout << "pilihan tidak ada\n" << endl;
                }
            }
        }else {
            cout << "menu tidak tersedia" << endl;
            break;
        }
    }

    cout << "terima kasih" << endl;

    return 0;
}