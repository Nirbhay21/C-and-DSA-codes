#include<stdio.h>

int main(){
    printf("Logical Operator - \n");
    printf("(12 < 100) && (12 < 50) - %d\n", (12 < 100) && (12 < 50));
    printf("(12 < 100) || (12 < 50) - %d\n", (12 < 100) || (12 < 50));
    printf("!(1) - %d\n", !(1));
    printf("!(0) - %d\n", !(0));
    printf("\nBitwise Operator - \n");
    printf("(12 & 2) - %d\n", (12 & 2));
    printf("(12 | 2) - %d\n", (12 | 2));
    printf("(12 << 2) - %d\n", (12 << 2));
    printf("(12 >> 2) - %d\n", (12 >> 2));
    printf("(12 ^ 2) - %d\n", (12 ^ 2));
    printf("~(12) - %d\n", ~(12));
    return 0;
}