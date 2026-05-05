#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    static int nim;

public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pnim){
        nim = pnim;
    }

    static int getNim(){
        return nim;
    }

    mahasiswa(string pnama) : nama(pnama){
        setID();
    }
};

int mahasiswa::nim = 0;

void mahasiswa::setID(){
    id = ++nim;
}

void mahasiswa::printAll(){
    cout << "ID = " << id << endl;
    cout << "nama = " << nama << endl;
    cout << endl;
}

int main() {
    mahasiswa mhs1("udin");
    mahasiswa mhs2("tapir");

    mahasiswa::setNim(9);

    mahasiswa mhs3("maria");
    mahasiswa mhs4("yohanes");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar objek = " << mahasiswa::getNim() << endl;

    return 0;
}