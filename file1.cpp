#include <iostream>
using namespace std;

class BangunDatar;

class PersegiPanjang{
    public :
        void inputData(BangunDatar &bD);
        void outputData(BangunDatar &bD);
};

class BangunDatar{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return panjang * lebar;
        };
        float hitungKeliling(){
            return 2 * (panjang + lebar);
        };
    public:
        // untuk mengakses panjang dan lebar 
        friend void PersegiPanjang ::inputData(BangunDatar &bD);
        // untuk mengakses fungsi
        friend void PersegiPanjang ::outputData(BangunDatar &bD);
};

void PersegiPanjang ::inputData(BangunDatar &bD){
    cout << "Masukkan Panjang : ";
    cin >> bd.panjang;
    cout << "Masukkan Lebar: ";
    cin >> bd.lebar;
}

void PersegiPanjang ::outputData(BangunDatar &bD);{
    cout << "Luas : " << bd.hitungLuas() << enddl;
    cout << "Keliling : " << bd.hitungkeliling() << enddl;
};

int main () {
    PersegiPanjang pP;
    BangunDatar bD;
    pP.inputData (bD);
    pP.outputData (bD);
};

`