#include <stdio.h>

int faktorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * faktorial(n - 1);
}

void hitungMundur(int n) {
    if (n <= 0) {
        printf("Mulai!\n");
        return;
    }
    printf("%d...\n", n);
    hitungMundur(n - 1); 
}

int main(void) {
    int angka = 6;
    printf("Faktorial dari %d = %d\n\n", angka, faktorial(angka));

    hitungMundur(3);
    return 0;
}