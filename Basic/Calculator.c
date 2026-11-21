#include <stdio.h>

int main() {
    double angka1, angka2, hasil;
    char op;

    printf("Masukkan angka pertama: ");
    scanf("%lf", &angka1);

    printf("Masukkan operasi (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Masukkan angka kedua: ");
    scanf("%lf", &angka2);

    switch (op) {
        case '+':
            hasil = angka1 + angka2;
            printf("Hasil: %.2lf\n", hasil);
            break;
        case '-':
            hasil = angka1 - angka2;
            printf("Hasil: %.2lf\n", hasil);
            break;
        case '*':
            hasil = angka1 * angka2;
            printf("Hasil: %.2lf\n", hasil);
            break;
        case '/':
            if (angka2 == 0) {
                printf("Error: Tidak bisa membagi dengan nol.\n");
            } else {
                hasil = angka1 / angka2;
                printf("Hasil: %.2lf\n", hasil);
            }
            break;
        default:
            printf("Operasi tidak dikenal.\n");
            break;
    }

    return 0;
}