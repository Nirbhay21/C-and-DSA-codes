#include<stdio.h>

int add(int num1, int num2);

int main(){
    int num1 = 12, num2 = 10;
    printf("12 + 10 = %d", add(num1, num2));
    return 0;
}

int add(int num1, int num2){
    return num1 + num2;
}