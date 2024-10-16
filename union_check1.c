#include<stdio.h>

union un {
    float y, b;
    int x;
};

int main(){
    union un u1;
    u1.x = 12;
    u1.y = 24.12;
    printf("%d\n", u1.x);
    printf("%f\n", u1.y);
    return 0;
}