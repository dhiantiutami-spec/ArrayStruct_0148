#include <iostream>
using namespace std;

struct detaiAlamat
{
    string desa;
    string kota;

};

struct Orang
{
    string nama;
    detaiAlamat alamat;
    int umur;
};

int main ()
{
    // Deklarasi variabel struct
    Orang mhs;

    // Mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << "Isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << "Isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Data Tampil" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;

}