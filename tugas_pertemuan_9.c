
#include <stdio.h>
#include <string.h>

double hitungAsuransi(char jenis[], double nilai, double luas) {
    double biaya = nilai * luas * 0.035;

    if (strcmp(jenis, "kacang kedelai") == 0 ||
        strcmp(jenis, "kentang") == 0 ||
        strcmp(jenis, "bawang merah") == 0 ||
        strcmp(jenis, "cabai") == 0) {
        biaya = biaya * 2;
    } else if (strcmp(jenis, "padi") == 0 ||
               strcmp(jenis, "singkong") == 0 ||
               strcmp(jenis, "jagung") == 0) {
        biaya = biaya * 1.5;
    }

    return biaya;
}

void cetakSlip(char nama[], int jumlah,
               char jenis[][50], double biaya[],
               double total) {
    int i;

    printf("\n===== SLIP PEMBAYARAN ASURANSI =====\n");
    printf("Nama petani: %s\n", nama);

    for (i = 0; i < jumlah; i++) {
        printf("%d. Jenis ladang: %s\n", i + 1, jenis[i]);
        printf("   Biaya asuransi: Rp %.2f\n", biaya[i]);
    }

    printf("Total asuransi: Rp %.2f\n", total);
    printf("====================================\n");
}

int main() {
    char nama[100];
    char jenis[3][50];
    double nilai[3], luas[3], biaya[3];
    double total = 0;
    int jumlah, i;

    printf("Masukkan nama petani: ");
    scanf(" %99[^\n]", nama);

    printf("Masukkan jumlah jenis ladang (1-3): ");
    scanf("%d", &jumlah);

    if (jumlah < 1 || jumlah > 3) {
        printf("Jumlah jenis ladang harus 1 sampai 3.\n");
        return 0;
    }

    for (i = 0; i < jumlah; i++) {
        printf("\nLadang ke-%d\n", i + 1);

        printf("Jenis ladang (huruf kecil): ");
        scanf(" %49[^\n]", jenis[i]);

        printf("Nilai tanggungan per hektar: ");
        scanf("%lf", &nilai[i]);

        printf("Luas ladang (hektar): ");
        scanf("%lf", &luas[i]);

        biaya[i] = hitungAsuransi(jenis[i], nilai[i], luas[i]);
        total += biaya[i];
    }

    cetakSlip(nama, jumlah, jenis, biaya, total);

    return 0;
}
