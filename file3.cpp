#include <iostream>
using namespace std;

float luasPersegiPanjang(float x, float y) {
    return x * y;
}

float luasLingkaran(float x) {
    return 3.14 * x * x;
}

int main(){
    int pilihan;
    float panjang, lebar, jejari;
    do{
        cout << "===Menu===" << endl;
        cout << "1. Menghitung Luas Persegi Panjang" << endl;
        cout << "2. Menghitung Luas Lingkaran" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih (1/2/3) : ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Menghitung Luas Persegi Panjang"<< endl;
                cout << "Masukkan panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar: ";
                cin >> lebar;
                cout << "Luas Persegi Panjang: " 
                << luasPersegiPanjang(panjang, lebar) << endl;
                break;
            case 2:
                cout << "Menghitung Luas Lingkaran" << endl;
                cout << "Masukkan jari-jari: ";
                cin >> jejari;
                cout << "Luas Lingkaran: " 
                << luasLingkaran(jejari) << endl;
                break;
            case 3:
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }
    }while (pilihan != 3);
}