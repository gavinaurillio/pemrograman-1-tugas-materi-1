#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, angka1, angka2, jawaban, hasil;
    int salah = 0, skor = 0;
    char operator;

    srand(time(NULL));

    for (i = 1; i <= 30; i++) {

        if (i <= 10) {
            angka1 = rand() % 10 + 1;
            angka2 = rand() % 10 + 1;
        } else if (i <= 20) {
            angka1 = rand() % 30 + 1;
            angka2 = rand() % 30 + 1;
        } else {
            angka1 = rand() % 60 + 1;
            angka2 = rand() % 60 + 1;
        }

        operator = "+-*/"[rand() % 4];

        if (operator == '/' && angka2 == 0) {
            angka2 = 1;
        }

        if (operator == '+') {
            hasil = angka1 + angka2;
        } else if (operator == '-') {
            hasil = angka1 - angka2;
        } else if (operator == '*') {
            hasil = angka1 * angka2;
        } else {
            hasil = angka1 / angka2;
        }

        printf("\nSoal %d: %d %c %d = ", i, angka1, operator, angka2);
        scanf("%d", &jawaban);

        if (jawaban == hasil) {
            if (i <= 10) {
                skor += 5;
            } else if (i <= 20) {
                skor += 10;
            } else {
                skor += 15;
            }

            printf("Benar!\n");
        } else {
            salah++;
            printf("Salah! Jawaban yang benar = %d\n", hasil);

            if (salah >= 3) {
                printf("\nGame selesai karena sudah salah 3 kali.\n");
                break;
            }
        }
    }

    printf("\nSkor akhir = %d\n", skor);

    return 0;
}