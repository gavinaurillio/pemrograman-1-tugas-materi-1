#include <stdio.h>

int main() {



    // SOAL 1
    int n;
    int jumlah = 0;

    printf("=== SOAL 1 ===\n");
    printf("Masukkan n: ");
    scanf("%d", &n);

    printf("Deret: ");

    for (int i = 1; i <= n; i++) {
        int angka = i * n;

        printf("%d", angka);
        jumlah = jumlah + angka;

        if (i < n) {
            printf(" + ");
        }
    }

    printf("\nJumlah = %d\n\n", jumlah);



    // SOAL 2
    int pinBenar = 1234;
    int pin;
    int salah = 0;

    printf("=== SOAL 2 ===\n");

    while (salah < 3) {
        printf("Masukkan PIN: ");
        scanf("%d", &pin);

        if (pin == pinBenar) {
            printf("PIN benar.\n\n");
            break;
        } else {
            salah = salah + 1;
            printf("PIN salah.\n");
        }

        if (salah == 3) {
            printf("Kartu Anda Diblokir.\n\n");
        }
    }



    // SOAL 3
    int angkaRahasia = 13;
    int tebakan;

    printf("=== SOAL 3 ===\n");
    printf("Tebak angka dari 1 sampai 20.\n");

    while (1) {
        printf("Masukkan tebakan (99 untuk berhenti): ");
        scanf("%d", &tebakan);

        if (tebakan == 99) {
            printf("Permainan dihentikan.\n\n");
            break;
        } else if (tebakan < angkaRahasia) {
            printf("Lebih tinggi.\n");
        } else if (tebakan > angkaRahasia) {
            printf("Lebih rendah.\n");
        } else {
            printf("Cocok!\n\n");
            break;
        }
    }



    // SOAL 4
    int ukuran;
    char c1, c2;

    printf("=== SOAL 4 ===\n");

    printf("Masukkan ukuran bujur sangkar: ");
    scanf("%d", &ukuran);

    printf("Masukkan karakter baris ganjil: ");
    scanf(" %c", &c1);

    printf("Masukkan karakter baris genap: ");
    scanf(" %c", &c2);

    for (int i = 1; i <= ukuran; i++) {

        for (int j = 1; j <= ukuran; j++) {

            if (i % 2 == 1) {
                printf("%c ", c1);
            } else {
                printf("%c ", c2);
            }
        }

        printf("\n");
    }

    printf("\n");


    
    // SOAL 5
    int pilihan;
    int jumlahProduk = 0;
    int total = 0;

    int produkA = 0;
    int produkB = 0;
    int produkC = 0;
    int produkD = 0;
    int produkE = 0;

    printf("=== SOAL 5 ===\n");

    while (jumlahProduk < 3 && total < 50000) {

        printf("\nDaftar Produk:\n");
        printf("1. Produk A - Rp15000\n");
        printf("2. Produk B - Rp18000\n");
        printf("3. Produk C - Rp20000\n");
        printf("4. Produk D - Rp22000\n");
        printf("5. Produk E - Rp25000\n");
        printf("6. Selesai\n");

        printf("Pilih produk: ");
        scanf("%d", &pilihan);

        if (pilihan == 6) {
            break;

        } else if (pilihan == 1) {

            if (total + 15000 <= 50000) {
                produkA++;
                total = total + 15000;
                jumlahProduk++;
            } else {
                printf("Total melebihi Rp50000.\n");
            }

        } else if (pilihan == 2) {

            if (total + 18000 <= 50000) {
                produkB++;
                total = total + 18000;
                jumlahProduk++;
            } else {
                printf("Total melebihi Rp50000.\n");
            }

        } else if (pilihan == 3) {

            if (total + 20000 <= 50000) {
                produkC++;
                total = total + 20000;
                jumlahProduk++;
            } else {
                printf("Total melebihi Rp50000.\n");
            }

        } else if (pilihan == 4) {

            if (total + 22000 <= 50000) {
                produkD++;
                total = total + 22000;
                jumlahProduk++;
            } else {
                printf("Total melebihi Rp50000.\n");
            }

        } else if (pilihan == 5) {

            if (total + 25000 <= 50000) {
                produkE++;
                total = total + 25000;
                jumlahProduk++;
            } else {
                printf("Total melebihi Rp50000.\n");
            }

        } else {
            printf("Pilihan tidak tersedia.\n");
        }
    }

    printf("\nProduk yang dipilih:\n");
    printf("Produk A: %d\n", produkA);
    printf("Produk B: %d\n", produkB);
    printf("Produk C: %d\n", produkC);
    printf("Produk D: %d\n", produkD);
    printf("Produk E: %d\n", produkE);

    printf("Total produk = %d\n", jumlahProduk);
    printf("Total tagihan = Rp%d\n", total);


    return 0;
}