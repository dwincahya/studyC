#include <stdio.h>
#include "nilai.h"

int main(void) {
    int jumlah;
    printf("Berapa banyak nilai? ");

    if (scanf("%d", &jumlah) == 1 && jumlah > 0 && jumlah <= 100) {
        int nilai[100];

        for (int i = 0; i < jumlah; i++) {
            printf("Nilai ke-%d: ", i + 1);
            scanf("%d", &nilai[i]);
        }

        float rata = hitung_rata_rata(nilai, jumlah);
        printf("Rata-rata: %.2f\n", rata);
    } else {
        printf("Jumlah harus antara 1 sampai 100.\n");
    }

    int c;
    printf("\nTekan Enter untuk keluar...");
    while ((c = getchar()) != '\n' && c != EOF) {
    }
    getchar();

    return 0;
}