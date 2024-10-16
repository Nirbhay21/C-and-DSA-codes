#include<stdio.h>

int isPalendrome(char str[], int size);

int main(){
    char str[7] = "abcdcba";
    if(isPalendrome(str, 7)){
        printf("String is palendrome");
    } else {
        printf("String is not palendrome");
    }
    return 0;
}

int isPalendrome(char str[], int size){
    for(int i = 0, j = size - 1; i < size / 2; i++, j--){
        if(str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}