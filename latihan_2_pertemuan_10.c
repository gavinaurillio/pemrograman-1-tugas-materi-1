
#include <stdio.h>

int main() {
    float suhu[7];
    float total = 0, rataRata;
    float terdingin, terpanas;
    int i;

    for (i = 0; i < 7; i++) {
        printf("Masukkan temperatur hari ke-%d: ", i + 1);
        scanf("%f", &suhu[i]);
        total = total + suhu[i];
    }

    terdingin = suhu[0];
    terpanas = suhu[0];

    for (i = 1; i < 7; i++) {
        if (suhu[i] < terdingin) {
            terdingin = suhu[i];
        }

        if (suhu[i] > terpanas) {
            terpanas = suhu[i];
        }
    }

    rataRata = total / 7;

    printf("\nTemperatur rata-rata = %.2f\n", rataRata);
    printf("Temperatur terdingin = %.2f\n", terdingin);
    printf("Temperatur terpanas = %.2f\n", terpanas);

    return 0;
}