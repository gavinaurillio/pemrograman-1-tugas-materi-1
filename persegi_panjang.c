#include <stdio.h>

int main() {
    int panjang, lebar;
    int luas, keliling;

    printf("Masukkan panjang: ");
    scanf("%d", &panjang);

    printf("Masukkan lebar: ");
    scanf("%d", &lebar);

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    printf("Luas = %d\n", luas);
    printf("Keliling = %d\n", keliling);

    return 0;
}