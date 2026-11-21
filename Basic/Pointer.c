#include <stdio.h>

int main(void) {
    int angka = 10;
    int *ptr = &angka;

    printf("Nilai angka : %d\n", angka);
    printf("Alamat angka: %p\n", (void *)&angka);
    printf("Isi ptr     : %p\n", (void *)ptr);
    printf("Nilai *ptr  : %d\n\n", *ptr);

    *ptr = 25;
    printf("Nilai angka setelah *ptr = 25: %d\n\n", angka);

    int deret[3] = {100, 200, 300};
    int *pArr = deret;

    for (int i = 0; i < 3; i++) {
        printf("Elemen %d -> *(pArr + %d) = %d (alamat: %p)\n",
               i, i, *(pArr + i), (void *)(pArr + i));
    }

    return 0;
}