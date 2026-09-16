#include <stdio.h>

int main() {


    // Soal 1

    int a = 1, b = 1, c;

    for (int i = 1; i <= 8; i++) {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");


        // Soal 2

    char huruf = 'A';

    for (int i = 1; i <= 4; i++) {

        for (int j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%c ", huruf);
            huruf++;
        }

        printf("\n");
    }


        // Soal 3

    for (int i = 1; i <= 5; i++) {

        if (i == 1 || i == 5) {
            printf("*****");
        } else if (i == 2 || i == 4) {
            printf(" ***");
        } else {
            printf("  *");
        }

        printf("\n");
    }


        // Soal 4

    int angkaKiri[] = {7, 15, 27, 42, 59};
    int angkaKanan[] = {10, 18, 24, 28, 30};

    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("*");
        }

        printf("%d %d\n", angkaKiri[i], angkaKanan[i]);
    }


    // Soal 5

for (int i = 0; i < 5; i++) {

    for (int j = 0; j < 4 - i; j++) {
        printf(" ");
    }

    int angka = 1;

    for (int j = 0; j <= i; j++) {
        printf("%d ", angka);
        angka = angka * (i - j) / (j + 1);
    }

    printf("\n");
}

    return 0;
}