#include <iostream>
using namespace std;
#include <string>


struct Pengarang
{
    string nama;
    string alamat;
};

struct Buku {
    string judul;
    string jumlahHalaman;
    Pengarang pengarang;
};

int main(){
    Buku bk[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "masukkan judul = ";
        getline(cin, bk[i].judul);
        cout << "masukkan jumlah halaman = ";
        cin >> bk[i].jumlahHalaman;
        cin.ignore();
        cout << "masukkan pengarang = ";
        getline(cin, bk[i].pengarang.nama);
        cout << "masukkan alamat pengarang = ";
        getline(cin, bk[i].pengarang.alamat);
    }
    
    cout << endl;
    cout << "tampilkan data buku" << endl;
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
    cout << "judul buku = " << bk[i].judul << endl;
    cout << "jumlah halaman buku = " << bk[i].jumlahHalaman << endl;
    cout << "pengarang buku = " << bk[i].pengarang.nama << endl;
    cout << "alamat pengarang = " << bk[i].pengarang.alamat << endl;
    }
    
    

    

}