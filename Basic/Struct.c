#include <stdio.h>
#include <string.h>

typedef struct {
    int hari;
    int bulan;
    int tahun;
} Tanggal;

typedef struct {
    int kode;
    char nama[40];
    float harga;
    Tanggal kadaluarsa; 
} Barang;

int main(void) {
    Barang b1 = {1, "Susu UHT", 18500.0f, {21, 11, 2026}};

    Barang b2;
    b2.kode = 2;
    strcpy(b2.nama, "Roti Gandum");
    b2.harga = 22000.0f;
    b2.kadaluarsa.hari = 28;
    b2.kadaluarsa.bulan = 11;
    b2.kadaluarsa.tahun = 2026;

    Barang b3 = b1;
    b3.kode = 3;
    strcpy(b3.nama, "Susu Cokelat");

    printf("Barang 1: [%d] %s - Rp%.0f (Exp: %02d-%02d-%d)\n",
           b1.kode, b1.nama, b1.harga,
           b1.kadaluarsa.hari, b1.kadaluarsa.bulan, b1.kadaluarsa.tahun);

    printf("Barang 2: [%d] %s - Rp%.0f (Exp: %02d-%02d-%d)\n",
           b2.kode, b2.nama, b2.harga,
           b2.kadaluarsa.hari, b2.kadaluarsa.bulan, b2.kadaluarsa.tahun);

    printf("Barang 3: [%d] %s - Rp%.0f (Exp: %02d-%02d-%d)\n",
           b3.kode, b3.nama, b3.harga,
           b3.kadaluarsa.hari, b3.kadaluarsa.bulan, b3.kadaluarsa.tahun);

    return 0;
}