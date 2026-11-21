#include <stdio.h>

int main() {
    int myNum = 1234567890;   
    short myShort = 12345;
    long myLong = 1234567890;
    float myFloatNum = 5.991857442;
    double myDouble = 5.991857442;
    char myLetter = 'D';

    printf("%d\n", myNum);
    printf("%d\n", myShort);
    printf("%ld\n", myLong);
    printf("%f\n", myFloatNum);
    printf("%.9f\n", myDouble);
    printf("%c\n", myLetter); 
}