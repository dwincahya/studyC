#include <stdio.h>

int main() {
    int i;
    char kata[] = "Halo";
    char strArray[2][50] = {
        "Hallo,",
        "Salam Kenal!"
    };
    printf("Hasil String : %s\n", kata);

    for ( i = 0; i < 2; i++)
    {
        printf("Hasil String : %s\n", strArray[i]);
    }

    return 0;
}