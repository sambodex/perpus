#ifndef DATA_BUKU_H
#define DATA_BUKU_H

#include <string>
using namespace std;

const int MAKS_BUKU = 100;

struct Buku {
    int id;
    int jumlah;
    int isbn;
    string judul;
    string pengarang;
    string penerbit;
    string tahunTerbit;
    string kategori;
};

extern Buku daftarBuku[MAKS_BUKU];
extern int jumlahBuku;

#endif
