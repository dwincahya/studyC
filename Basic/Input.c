#include <stdio.h>

int main() {
    char name[50];

    printf("Siapa namamu ? ");
    scanf("%49s", name);

    printf("Hallo, %s %s\n", name, "Salam Kenal !");
    return 0;
}