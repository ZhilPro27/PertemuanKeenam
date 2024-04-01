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
    cin >> mhs.NIM;
    cout << "Nama Mahasiswa = ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa = ";
    cout << "\n \t Nama Desa = ";
    cin >> mhs.alamat.desa;
    cout << "\n \t Nama Kota = ";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahasiswa = ";
    cin >> mhs.umur;
}