
#include <stdio.h>
#include <string.h>

struct Menu {
    char nama[50];
    char kategori[20];
    float harga;
};

struct Pegawai {
    char nama[50];
    char jabatan[30];
    float gaji;
};

int main() {
    struct Menu menu1 = {"Nasi Goreng", "Makanan", 25000};
    struct Pegawai pegawai1 = {"Andi", "Kasir", 3500000};

    printf("=== DATA MENU RESTORAN ===\n");
    printf("Nama menu : %s\n", menu1.nama);
    printf("Kategori  : %s\n", menu1.kategori);
    printf("Harga     : Rp%.0f\n", menu1.harga);

    printf("\n=== DATA PEGAWAI ===\n");
    printf("Nama      : %s\n", pegawai1.nama);
    printf("Jabatan   : %s\n", pegawai1.jabatan);
    printf("Gaji      : Rp%.0f\n", pegawai1.gaji);

    return 0;
}
