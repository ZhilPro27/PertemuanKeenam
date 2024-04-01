#include <iostream>
#include <istream>
#include <string>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string NIM;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main() {
    Mahasiswa mhs[3];
    for (int i=0; i<3; i++) {
        cout << "Data ke-" << (i+1) << endl;
        cout << "Nomor Mahasiswa = ";
        getline (cin, mhs[i].NIM);
        cout << "Nama Mahasiswa = ";
        getline (cin, mhs[i].nama);
        cout << "Alamat Mahasiswa = ";
        cout << "\n \t Nama Desa = ";
        cin >> mhs[i].alamat.desa;
        cout << "\t Nama Kota = ";
        cin >> mhs[i].alamat.kota;
        cout << "Umur Mahasiswa = ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }
    
    for (int i=0; i<3; i++){
        cout << endl;
        cout << "Data Mahasiswa ke-" << (i+1) << " : " << endl;
        cout << "\n NIM : " << mhs[i].NIM;
        cout << "\n Nama : " << mhs[i].nama;
        cout << "\n Alamat : ";
        cout << "\n \t Desa : " << mhs[i].alamat.desa;
        cout << "\n \t Kota : " << mhs[i].alamat.kota; 
        cout << "\n Umur : " << mhs[i].umur;
    }
    
}