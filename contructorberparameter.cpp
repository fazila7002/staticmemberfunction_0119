#include <iostream>
using namespace std;

class Mahasiswa {
public:
Mahasiswa(int nim, string nama);
};

Mahasiswa::Mahasiswa(int nim, string nama){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "Nim : " << nim << endl;
    cout << "Nama : " << nama << endl;
}