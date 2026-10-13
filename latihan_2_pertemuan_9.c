
#include <stdio.h>

double a, b;

void inputBilangan() {
    printf("Masukkan bilangan pertama: ");
    scanf("%lf", &a);

    printf("Masukkan bilangan kedua: ");
    scanf("%lf", &b);
}

void tambah() {
    printf("Hasil = %.2f\n", a + b);
}

void kali() {
    printf("Hasil = %.2f\n", a * b);
}

void kurang() {
    printf("Hasil = %.2f\n", a - b);
}

void bagi() {
    if (b != 0) {
        printf("Hasil = %.2f\n", a / b);
    } else {
        printf("Tidak bisa membagi dengan nol.\n");
    }
}

int main() {
    char operasi, ulang;

    do {
        inputBilangan();

        printf("Pilih operasi (+, x, -, /): ");
        scanf(" %c", &operasi);

        switch (operasi) {
            case '+':
                tambah();
                break;

            case 'x':
            case 'X':
            case '*':
                kali();
                break;

            case '-':
                kurang();
                break;

            case '/':
                bagi();
                break;

            default:
                printf("Operasi tidak valid.\n");
        }

        printf("Hitung lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
