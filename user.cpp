#include <iostream>
#include "data_buku.h"
using namespace std;


void menuUser() {
    cout << "\n=== Menu User ===\n";
    cout << "1. Lihat Buku\n";
    cout << "2. Pinjam Buku\n";
    cout << "0. Keluar\n";
}

void lihatBuku() {
    if (jumlahBuku == 0) {
        cout << "Tidak ada buku tersedia.\n";
        return;
    }

    for (int i = 0; i < jumlahBuku; i++) {
        cout << daftarBuku[i].id << ". " << daftarBuku[i].judul
                  << " - " << daftarBuku[i].pengarang
                  << " (Stok: " << daftarBuku[i].jumlah << ")\n";
    }
}

void pinjamBuku() {
    int id, jumlahPinjam;
    cout << "Masukkan ID buku yang ingin dipinjam: ";
    cin >> id;

    bool ditemukan = false;
    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].id == id) {
            ditemukan = true;
            cout << "Jumlah yang ingin dipinjam: ";
            cin >> jumlahPinjam;

            if (jumlahPinjam <= daftarBuku[i].jumlah) {
                daftarBuku[i].jumlah -= jumlahPinjam;
                cout << "Buku berhasil dipinjam. Sisa stok: " << daftarBuku[i].jumlah << "\n";
            } else {
                cout << "Stok tidak mencukupi.\n";
            }
            break;
        }
    }

    if (!ditemukan) {
        cout << "Buku tidak ditemukan.\n";
    }
}
