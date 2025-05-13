#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public:
        // Construktor dengan parameter
        mahasiswa (int nim, string nama);
};

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "constructor dengan parameter terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
    
}