#include <iostream>
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
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa = ";
    getline (cin, mhs.NIM);
    cout << "Nama Mahasiswa = ";
    getline (cin, mhs.nama);
    cout << "Alamat Mahasiswa = ";
    cout << "\n \t Nama Desa = ";
    cin >> mhs.alamat.desa;
}