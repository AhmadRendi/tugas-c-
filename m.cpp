#include<iostream>
#include<queue>
#include<list>


using namespace std;


const int  ticketPprice= 30000;
const int foodPprice[]={65000, 38000, 43000, 32000, 55000};
const int drinkPprice[]={32000,32000, 32000, 37000, 50000, 30000, 65000};
const string SHOWTIME_DESCRIPTION[] = {"12:25", "14:20", "16:15", "18:10", "20:05"};
const string MovieChoices[] = {
    "The SpongeBob Movie: Sponge on the Run",
    "One Piece Film: Red",
    "Tom and Jerry: Snowman's Land",
    "Doraemon The Movie: Nobita's Little Star Wars 2021",
    "Sofia The First: The Buttercups"};
const string FoodsOrder[] = {
    "Popcorn",
    "French Fries",
    "Mac and Cheese",
    "Nachos",
    "Mini Pangsit Goreng"};
const string DrinksOrder[] = {
       "Coca-Cola",
	   "Fanta",
	   "Sprite",
	   "Lemon Tea",
	   "Milo Dinosaurus",
	   "Java Tea Special",
	   "Lychee Tea"};



class Customer{
    private:
    string nama;

    public:
    void setNama(string nama){
        this->nama = nama;
    }

    string getNama(){
        return this->nama;
    }

};


class Tiket{
    private :
    Customer customer;
    string nama;
    string time;
    int jumlah;
    int harga;
    public :

    void setCustomer(Customer customer){
        this->customer = customer;
    }

    Customer getCustomer(){
        return this->customer;
    }

    void setNama(string nama){
        this->nama = nama;
    }

    string getNama(){
        return this->nama;
    }
    void setTime(string time){
        this->time = time;
    }
    string getTime(){
        return this->time;
    }
    void setJumlah(int jumlah){
        this->jumlah = jumlah;
    }
    int getjumlah(){
        return this->jumlah;
    }
    void setHarga(int harga){
        this->harga = harga;
    }
    int getHarga(){
        return this->harga;
    }
};



class Food {
    private:
    Customer customer;
    string nama;
    int harga;
    int jumlah;


    public :
    void setCustomer(Customer customer){
        this->customer=customer;
    }

    Customer getCustomer(){
        return this->customer;
    }

    void setNama(string nama){
        this->nama = nama;
    }

    string getNama(){
        return this->nama;
    }

    void setJumlah(int jumlah){
        this->jumlah = jumlah;
    }

    int getJumlah(){
        return this->jumlah;
    }

    void setHarga(int harga){
        this->harga = harga;
    }

    int getHarga(){
        return this->harga;
    }
};

class Drink{
    private:
    Customer customer;
    string nama;
    int harga;
    int jumlah;

    public :
    void setCustomer(Customer customer){
        this->customer=customer;
    }

    Customer getCustomer(){
        return this->customer;
    }

    void setNama(string nama){
        this->nama = nama;
    }

    string getNama(){
        return this->nama;
    }

    void setJumlah(int jumlah){
        this->jumlah = jumlah;
    }

    int getJumlah(){
        return this->jumlah;
    }

    void setHarga(int harga){
        this->harga = harga;
    }

    int getHarga(){
        return this->harga;
    }
};


string setWaktu(int pilih){
    return SHOWTIME_DESCRIPTION[pilih - 1];
}

int setPrice(int jumlah){
    int temp = ticketPprice * jumlah;
    return temp;
}

int setPriceFood(int jumlah){
    int temp = foodPprice * jumlah;
}

int setPriceDrink(int jumlah){
    int temp = drinkPprice * jumlah;
    return temp;
}

string setNamaFilm(int pilih){
    return MovieChoices[pilih - 1];
}

string setNamaFood(int pilih){
    return FoodsOrder[pilih - 1];
}

string setNamaDrink(int pilih){
    return DrinksOrder[pilih - 1];
}

int main(){

    // setTime(1);
    list<Tiket> tiketList;
    list<Drink> drinkList;
    list<Food> foodList;

    Customer customer;
    customer.setNama("Ahamd Rendi");

    Customer customer1;
    customer1.setNama("Supriadi");


    Tiket tiket;
    Tiket tiket1;

    tiket.setCustomer(customer);
    tiket.setNama(setNamaFilm(1));
    tiket.setTime(setWaktu(1));
    tiket.setJumlah(2);
    tiket.setHarga(setPrice(tiket.getjumlah()));

    tiket1.setCustomer(customer1);
    tiket1.setNama("entah");
    tiket1.setTime(setWaktu(1));
    tiket1.setJumlah(2);
    tiket1.setHarga(setPrice(tiket.getjumlah()));

    tiketList.push_back(tiket);
    tiketList.push_back(tiket1);

    for (auto &value : tiketList){
        cout << "nama customer : " << value.getCustomer().getNama() << endl;
        cout << "nama film : " << value.getNama() << endl;
        cout << "waktu : " << value.getTime() << endl;
        cout << "jumlah : " << value.getjumlah() << endl;
        cout << "harga : " << value.getHarga() << endl;

        cout << endl;
    }
    
}