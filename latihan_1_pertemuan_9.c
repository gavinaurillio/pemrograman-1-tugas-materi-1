
#include <stdio.h>

double tambah(double a, double b) {
    return a + b;
}

double kali(double a, double b) {
    return a * b;
}

double kurang(double a, double b) {
    return a - b;
}

double bagi(double a, double b) {
    return a / b;
}

int main() {
    double a, b, hasil;
    char operasi, ulang;

    do {
        printf("Masukkan bilangan pertama: ");
        scanf("%lf", &a);

        printf("Masukkan bilangan kedua: ");
        scanf("%lf", &b);

        printf("Pilih operasi (+, x, -, /): ");
        scanf(" %c", &operasi);

        switch (operasi) {
            case '+':
                hasil = tambah(a, b);
                printf("Hasil = %.2f\n", hasil);
                break;

            case 'x':
            case 'X':
            case '*':
                hasil = kali(a, b);
                printf("Hasil = %.2f\n", hasil);
                break;

            case '-':
                hasil = kurang(a, b);
                printf("Hasil = %.2f\n", hasil);
                break;

            case '/':
                if (b != 0) {
                    hasil = bagi(a, b);
                    printf("Hasil = %.2f\n", hasil);
                } else {
                    printf("Tidak bisa membagi dengan nol.\n");
                }
                break;

            default:
                printf("Operasi tidak valid.\n");
        }

        printf("Hitung lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
