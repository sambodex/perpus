#include <iostream>
#include "data_buku.h"
using namespace std;


void menuAdmin() {
    cout << "\n=== Menu Admin ===\n";
    cout << "1. Tambah Buku\n";
    cout << "2. Hapus Buku\n";
    cout << "0. Keluar\n";
}

void tambahBuku() {
    if (jumlahBuku >= MAKS_BUKU) {
        cout << "Kapasitas buku penuh!\n";
        return;
    }


    cout << "ID: ";
    cin >> daftarBuku[jumlahBuku].id;

    cout << "ISBN: ";
    cin >> daftarBuku[jumlahBuku].isbn;

    cout << "jumlah: ";
    cin >> daftarBuku[jumlahBuku].tahunTerbit;
    cin.ignore(); // Mengabaikan newline setelah cin

    cout << "Judul buku: ";
    getline(cin, daftarBuku[jumlahBuku].judul);

    cout << "Pengarang: ";
    getline(cin, daftarBuku[jumlahBuku].pengarang);

    cout << "penerbit: ";
    getline(cin, daftarBuku[jumlahBuku].penerbit);

    cout << "tahunTerbit: ";
    getline(cin, daftarBuku[jumlahBuku].tahunTerbit);

    cout << "kategori: ";
    getline(cin, daftarBuku[jumlahBuku].kategori);

    daftarBuku[jumlahBuku].id = jumlahBuku + 1;
    jumlahBuku++;

    cout << "Buku berhasil ditambahkan!\n";
}

void hapusBuku() {
    int id;
    cout << "Masukkan ID buku yang ingin dihapus: ";
    cin >> id;

    bool ditemukan = false;
    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].id == id) {
            ditemukan = true;
            for (int j = i; j < jumlahBuku - 1; j++) {
                daftarBuku[j] = daftarBuku[j + 1];
            }
            jumlahBuku--;
            cout << "Buku berhasil dihapus.\n";
            break;
        }
    }

    if (!ditemukan) {
        std::cout << "Buku tidak ditemukan.\n";
    }
}
