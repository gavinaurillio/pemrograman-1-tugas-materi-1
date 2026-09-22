#include <stdio.h>

int main() {
    int X = 0;


    // SOAL LAUNDRYKU 1
    float berat;
    int tarif;
    int biayaDasar;
    int biayaKantong = 0;
    int totalBiaya;

    printf("=== SOAL 1: BIAYA LAUNDRY ===\n");
    printf("Masukkan berat cucian (kg): ");
    scanf("%f", &berat);

    if (berat <= 3) {
        tarif = 7000;
    } else if (berat <= 6) {
        tarif = 6500;
    } else {
        tarif = 6000;
    }

    biayaDasar = berat * tarif;

    if (X % 2 == 0) {
        biayaKantong = 2000;
    }

    totalBiaya = biayaDasar + biayaKantong;

    printf("Biaya dasar = Rp%d\n", biayaDasar);
    printf("Biaya kantong = Rp%d\n", biayaKantong);
    printf("Total biaya = Rp%d\n\n", totalBiaya);


    // SOAL LAUNDRYKU 2
    int layanan;
    int lama;

    printf("=== SOAL 2: HARI PENGAMBILAN ===\n");

    for (int i = 1; i <= 5; i++) {
        printf("Pelanggan %d\n", i);
        printf("Pilih layanan (1 = Reguler, 2 = Express): ");
        scanf("%d", &layanan);

        if (layanan == 1) {
            lama = 2;
        } else {
            lama = 1;
        }

        if (i == X % 5) {
            lama = lama + 1;
        }

        printf("Lama pengerjaan = %d hari\n\n", lama);
    }


    // SOAL LAUNDRYKU 3
    int hariAmbil;
    int batasNormal = 3;
    int batasSenior = 4;
    int denda;
    int totalDenda = 0;

    printf("=== SOAL 3: KETERLAMBATAN ===\n");

    for (int i = 1; i <= 7; i++) {
        printf("Pelanggan %d\n", i);
        printf("Berapa hari setelah laundry selesai diambil? ");
        scanf("%d", &hariAmbil);

        denda = 0;

        if (hariAmbil > batasSenior) {
            denda = (hariAmbil - batasSenior) * 1000;
        }

        totalDenda = totalDenda + denda;

        printf("Denda pelanggan = Rp%d\n\n", denda);
    }

    printf("Total denda seluruh pelanggan = Rp%d\n\n", totalDenda);


    // SOAL LAUNDRYKU 4
    int kunjungan;
    float biayaAwal;
    float diskon;
    float potongan;
    float biayaAkhir;

    printf("=== SOAL 4: DISKON MEMBER ===\n");

    for (int i = 1; i <= 6; i++) {
        printf("Pelanggan %d\n", i);

        printf("Masukkan jumlah kunjungan dalam sebulan: ");
        scanf("%d", &kunjungan);

        printf("Masukkan biaya sebelum diskon: Rp");
        scanf("%f", &biayaAwal);

        if (kunjungan >= 4 && kunjungan <= 6) {
            diskon = 0.05;
        } else if (kunjungan > 6) {
            diskon = 0.10;
        } else {
            diskon = 0;
        }

        biayaAkhir = biayaAwal - (biayaAwal * diskon);

        potongan = 0;

        if (X % 2 == 0) {
            potongan = 3000;
        }

        biayaAkhir = biayaAkhir - potongan;

        printf("Diskon = %.0f%%\n", diskon * 100);
        printf("Potongan tambahan = Rp%.0f\n", potongan);
        printf("Biaya akhir = Rp%.0f\n\n", biayaAkhir);
    }


        // SOAL PRINTKU 1
    int halaman;
    int tarifPrint;
    int biayaDasarPrint;
    int biayaTambahanPrint = 0;
    int totalBiayaPrint;

    printf("=== SOAL 5: BIAYA PRINT ===\n");
    printf("Masukkan jumlah halaman: ");
    scanf("%d", &halaman);

    if (halaman <= 20) {
        tarifPrint = 500;
    } else if (halaman <= 50) {
        tarifPrint = 400;
    } else {
        tarifPrint = 350;
    }

    biayaDasarPrint = halaman * tarifPrint;

    if (X % 2 == 0) {
        biayaTambahanPrint = 1500;
    }

    totalBiayaPrint = biayaDasarPrint + biayaTambahanPrint;

    printf("Biaya dasar = Rp%d\n", biayaDasarPrint);
    printf("Biaya tambahan = Rp%d\n", biayaTambahanPrint);
    printf("Total biaya = Rp%d\n\n", totalBiayaPrint);


    // SOAL PRINTKU 2
    int jenisPrint;
    int waktuPrint;

    printf("=== SOAL 6: WAKTU SELESAI PRINT ===\n");

    for (int i = 1; i <= 5; i++) {
        printf("Pelanggan %d\n", i);
        printf("Pilih jenis print (1 = Draft, 2 = Final/Rapi): ");
        scanf("%d", &jenisPrint);

        if (jenisPrint == 1) {
            waktuPrint = 10;
        } else {
            waktuPrint = 20;
        }

        if (i == X % 5) {
            waktuPrint = waktuPrint + 5;
        }

        printf("Waktu selesai = %d menit\n\n", waktuPrint);
    }


    // SOAL PRINTKU 3
    int hariDokumen;
    int batasPrint = 3;
    int biayaPenitipan;
    int totalPenitipan = 0;

    printf("=== SOAL 7: KETERLAMBATAN PRINT ===\n");

    for (int i = 1; i <= 7; i++) {
        printf("Pelanggan %d\n", i);
        printf("Berapa hari setelah dokumen selesai diambil? ");
        scanf("%d", &hariDokumen);

        biayaPenitipan = 0;

        if (hariDokumen > batasPrint) {
            biayaPenitipan = (hariDokumen - batasPrint) * 2000;
        }

        totalPenitipan = totalPenitipan + biayaPenitipan;

        printf("Biaya penitipan pelanggan = Rp%d\n\n", biayaPenitipan);
    }

    printf("Total biaya penitipan = Rp%d\n\n", totalPenitipan);


    // SOAL PRINTKU 4
    int transaksi;
    float biayaPrintAwal;
    float diskonPrint;
    float potonganPrint;
    float biayaPrintAkhir;

    printf("=== SOAL 8: DISKON PELANGGAN TETAP ===\n");

    for (int i = 1; i <= 6; i++) {
        printf("Pelanggan %d\n", i);

        printf("Masukkan jumlah transaksi dalam sebulan: ");
        scanf("%d", &transaksi);

        printf("Masukkan biaya sebelum diskon: Rp");
        scanf("%f", &biayaPrintAwal);

        if (transaksi >= 4 && transaksi <= 6) {
            diskonPrint = 0.05;
        } else if (transaksi > 6) {
            diskonPrint = 0.10;
        } else {
            diskonPrint = 0;
        }

        biayaPrintAkhir = biayaPrintAwal -
                          (biayaPrintAwal * diskonPrint);

        potonganPrint = 0;

        if (X % 2 == 0) {
            potonganPrint = 1000;
        }

        biayaPrintAkhir = biayaPrintAkhir - potonganPrint;

        printf("Diskon = %.0f%%\n", diskonPrint * 100);
        printf("Potongan tambahan = Rp%.0f\n", potonganPrint);
        printf("Biaya akhir = Rp%.0f\n\n", biayaPrintAkhir);
    }

    return 0;
}