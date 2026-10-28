
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

void tampilMenu(struct Menu menu[], int jumlah) {
    int i;

    printf("\n=== DAFTAR MENU RESTORAN ===\n");
    for (i = 0; i < jumlah; i++) {
        printf("%d. %s | %s | Rp%.0f\n",
               i + 1, menu[i].nama,
               menu[i].kategori, menu[i].harga);
    }
}

void tampilPegawai(struct Pegawai pegawai[], int jumlah) {
    int i;

    printf("\n=== DAFTAR PEGAWAI ===\n");
    for (i = 0; i < jumlah; i++) {
        printf("%d. %s | %s | Gaji Rp%.0f\n",
               i + 1, pegawai[i].nama,
               pegawai[i].jabatan, pegawai[i].gaji);
    }
}

int main() {
    struct Menu menu[8] = {
        {"Nasi Goreng", "Makanan", 25000},
        {"Mie Goreng", "Makanan", 22000},
        {"Ayam Bakar", "Makanan", 30000},
        {"Soto Ayam", "Makanan", 20000},
        {"Nasi Uduk", "Makanan", 18000},
        {"Es Teh", "Minuman", 5000},
        {"Jus Jeruk", "Minuman", 12000},
        {"Air Mineral", "Minuman", 4000}
    };

    struct Pegawai pegawai[2] = {
        {"Andi", "Kasir", 3500000},
        {"Budi", "Koki", 4000000}
    };

    int pilihan, nomor;
    int totalMenu = 8;

    do {
        printf("\n=== APLIKASI RESTORAN ===\n");
        printf("1. Tampilkan menu\n");
        printf("2. Ubah data menu\n");
        printf("3. Tampilkan pegawai\n");
        printf("4. Ubah data pegawai\n");
        printf("0. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            tampilMenu(menu, totalMenu);
        } else if (pilihan == 2) {
            tampilMenu(menu, totalMenu);
            printf("Pilih nomor menu yang ingin diubah: ");
            scanf("%d", &nomor);

            if (nomor >= 1 && nomor <= totalMenu) {
                getchar();

                printf("Nama menu baru: ");
                fgets(menu[nomor - 1].nama, 50, stdin);
                menu[nomor - 1].nama[
                    strcspn(menu[nomor - 1].nama, "\n")
                ] = '\0';

                printf("Kategori baru (Makanan/Minuman): ");
                fgets(menu[nomor - 1].kategori, 20, stdin);
                menu[nomor - 1].kategori[
                    strcspn(menu[nomor - 1].kategori, "\n")
                ] = '\0';

                printf("Harga baru: ");
                scanf("%f", &menu[nomor - 1].harga);

                printf("Data menu berhasil diubah.\n");
            } else {
                printf("Nomor menu tidak valid.\n");
            }
        } else if (pilihan == 3) {
            tampilPegawai(pegawai, 2);
        } else if (pilihan == 4) {
            tampilPegawai(pegawai, 2);
            printf("Pilih nomor pegawai yang ingin diubah: ");
            scanf("%d", &nomor);

            if (nomor >= 1 && nomor <= 2) {
                getchar();

                printf("Nama pegawai baru: ");
                fgets(pegawai[nomor - 1].nama, 50, stdin);
                pegawai[nomor - 1].nama[
                    strcspn(pegawai[nomor - 1].nama, "\n")
                ] = '\0';

                printf("Jabatan baru: ");
                fgets(pegawai[nomor - 1].jabatan, 30, stdin);
                pegawai[nomor - 1].jabatan[
                    strcspn(pegawai[nomor - 1].jabatan, "\n")
                ] = '\0';

                printf("Gaji baru: ");
                scanf("%f", &pegawai[nomor - 1].gaji);

                printf("Data pegawai berhasil diubah.\n");
            } else {
                printf("Nomor pegawai tidak valid.\n");
            }
        } else if (pilihan != 0) {
            printf("Pilihan tidak valid.\n");
        }

    } while (pilihan != 0);

    printf("Program selesai.\n");
    return 0;
}
