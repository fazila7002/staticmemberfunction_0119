#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string judul;

public:
    Buku setJudul(string judul) {
        this->judul = judul;
        return *this;
    }

    string getJudul() {
        return this->judul;
    }
};

int main() {
    Buku bukunya;
    cout << bukunya.setJudul("Matematika").getJudul() << endl;
    return 0;
}