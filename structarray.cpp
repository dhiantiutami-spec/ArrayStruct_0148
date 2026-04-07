#include <iostream>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
    int umur;
};
int main()
{
    //Deklarasi variabel struct
    Orang mhs;
        //Mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "Isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;
    
}