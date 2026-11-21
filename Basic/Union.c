#include <stdio.h>

union Data {
    int angka;
    float desimal;
    char huruf;
};

int main(void) {
    union Data d;

    d.angka = 65;
    printf("Setelah isi angka (65) -> angka: %d, huruf: %c\n", d.angka, d.huruf);

    d.desimal = 9.5f;
    printf("Setelah isi desimal (9.5) -> desimal: %.2f\n", d.desimal);
    printf("Nilai angka ikut tertimpa (tidak valid lagi): %d\n", d.angka);

    printf("Ukuran union Data: %zu byte\n", sizeof(union Data));
    return 0;
}