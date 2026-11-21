#include <stdio.h>

int main() {
    char buffer[100];
    double input;
    double total = 0.0;
    int jumlah_nilai = 0;

    printf("Masukkan nilai desimal atau bulat (ketik 's' untuk stop):\n");

    while (1) {
        printf("Nilai ke-%d: ", jumlah_nilai + 1);
        if (scanf("%99s", buffer) != 1) {
            break;
        }

        if ((buffer[0] == 's' || buffer[0] == 'S') && buffer[1] == '\0') {
            break;
        }

        if (sscanf(buffer, "%lf", &input) == 1) {
            total += input;
            jumlah_nilai++;
        } else {
            printf("Input tidak valid, masukkan angka atau 's' untuk stop.\n");
        }
    }

    if (jumlah_nilai > 0) {
        double avg = total / jumlah_nilai;
        printf("\nJumlah data: %d\n", jumlah_nilai);
        printf("Total: %.4lf\n", total);
        printf("Rata-rata: %.2lf\n", avg);
    } else {
        printf("\nTidak ada nilai yang dimasukkan.\n");
    }

    return 0;
}