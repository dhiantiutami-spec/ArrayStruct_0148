#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct Orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main()
{
    // Deklarasi variabel struct
    Orang mhs[3];

    for (int i = 0; i <= 2; i++)
    {
        // Mengisi data
        cout << "Isikan data nama : ";
        getline(cin, mhs[i].nama);

        cout << "Isikan data desa : ";
        getline(cin, mhs[i].alamat.desa);

        cout << "Isikan data kota : ";
        getline(cin, mhs[i].alamat.kota);

        cout << "Isikan data umur : ";
        cin >> mhs[i].umur;
        cin.ignore();

        cout << endl;
    }

    for (int i = 0; i <= 2; i++)
    {
        cout << "Data Tampil" << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Desa : " << mhs[i].alamat.desa << endl;
        cout << "Kota : " << mhs[i].alamat.kota << endl;
        cout << "Umur : " << mhs[i].umur << endl;
        cout << endl;
    }

}