
#include <stdio.h>

#define JUMLAH_RAK 5

int main() {
    char namaBarang[JUMLAH_RAK][50];
    int stok[JUMLAH_RAK];
    int i, pilihan, nomorRak, jumlah;

    printf("=== APLIKASI GUDANG ===\n");

    for (i = 0; i < JUMLAH_RAK; i++) {
        printf("\nNama barang untuk rak %d: ", i + 1);
        scanf(" %49[^\n]", namaBarang[i]);

        do {
            printf("Stok awal: ");
            scanf("%d", &stok[i]);

            if (stok[i] < 0) {
                printf("Stok tidak boleh negatif!\n");
            }
        } while (stok[i] < 0);
    }

    do {
        printf("\n=== MENU GUDANG ===\n");
        printf("1. Tambah stok\n");
        printf("2. Kurangi stok\n");
        printf("3. Lihat histogram stok\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        if (pilihan == 1 || pilihan == 2) {
            printf("Pilih nomor rak (1-5): ");
            scanf("%d", &nomorRak);

            if (nomorRak < 1 || nomorRak > JUMLAH_RAK) {
                printf("Nomor rak tidak valid.\n");
            } else {
                printf("Nama barang: %s\n",
                       namaBarang[nomorRak - 1]);
                printf("Masukkan jumlah: ");
                scanf("%d", &jumlah);

                if (jumlah <= 0) {
                    printf("Jumlah harus lebih dari 0.\n");
                } else if (pilihan == 1) {
                    stok[nomorRak - 1] += jumlah;
                    printf("Stok berhasil ditambahkan.\n");
                } else {
                    if (jumlah > stok[nomorRak - 1]) {
                        printf("Stok tidak mencukupi.\n");
                    } else {
                        stok[nomorRak - 1] -= jumlah;
                        printf("Stok berhasil dikurangi.\n");
                    }
                }
            }
        } else if (pilihan == 3) {
            printf("\n=== HISTOGRAM STOK ===\n");

            for (i = 0; i < JUMLAH_RAK; i++) {
                printf("Rak %d - %s (%d): ",
                       i + 1, namaBarang[i], stok[i]);

                for (int j = 0; j < stok[i]; j++) {
                    printf("#");
                }

                printf("\n");
            }
            printf("Setiap # mewakili 1 unit stok.\n");
        } else if (pilihan != 0) {
            printf("Pilihan menu tidak valid.\n");
        }

    } while (pilihan != 0);

    printf("Program gudang selesai.\n");
    return 0;
}