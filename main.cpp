#include <iostream>
using namespace std;
#include "data_buku.h"
#include "login.h"

void tambahBuku();
void hapusBuku();
void lihatBuku();
void pinjamBuku();

int main() {

    
    bool isAdmin = login();
    int pilihan;
    do {
        if (isAdmin) {
            cout << "\n=== Menu Admin ===\n";
            cout << "1. Tambah Buku\n";
            cout << "2. Hapus Buku\n";
            cout << "3. Lihat Buku\n";
            cout << "0. Keluar\n";
            cout << "Pilih menu: ";
            cin >> pilihan;

            switch(pilihan) {
                case 1:
                    tambahBuku();
                    break;
                case 2:
                    hapusBuku();
                    break;
                case 3:
                    lihatBuku();
                    break;
                case 0:
                    cout << "Terima kasih!\n";
                    break;
                default:
                    cout << "Pilihan tidak valid!\n";
                    break;
            }
        } else {
            cout << "\n=== Menu User ===\n";
            cout << "1. Lihat Buku\n";
            cout << "2. Pinjam Buku\n";
            cout << "0. Keluar\n";
            cout << "Pilih menu: ";
            cin >> pilihan;

            switch(pilihan){
                case 1:
                    lihatBuku();
                    break;
                case 2:
                    pinjamBuku();
                    break;
                case 0:
                    cout << "Terima kasih!\n";
                    break;
                default:
                    cout << "Pilihan tidak valid!\n";
                    break;
            }
        }
    } while (pilihan != 0);
    return 0;
}
