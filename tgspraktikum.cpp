#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:

    Kendaraan() {
        id = 0;
        nama = "Tidak ada";
    }

    Kendaraan(int id) {
        this->id = id;
        nama = "Tidak ada";
    }

 
    Kendaraan(string nama) {
        id = 0;
        this->nama = nama;
    }

  
    Kendaraan(int id, string nama) {
        this->id = id;
        this->nama = nama;
    }

    void tampil() {
        cout << "ID Kendaraan : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << endl;
    }
};

int main() {
    Kendaraan k1;
    Kendaraan k2(101);
    Kendaraan k3("Motor");
    Kendaraan k4(202, "Mobil");

    k1.tampil();
    k2.tampil();
    k3.tampil();
    k4.tampil();

    return 0;
}