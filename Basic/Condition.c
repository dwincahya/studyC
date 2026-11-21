#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai > 10) {
        printf("Nilai melebihi batas maksimal\n");
    } else if (nilai >= 9) {
        printf("Grade A\n");
    } else if (nilai >= 8) {
        printf("Grade B\n");
    } else if (nilai >= 7) {
        printf("Grade C\n");
    } else {
        printf("Grade D\n");
    }

    return 0;
}