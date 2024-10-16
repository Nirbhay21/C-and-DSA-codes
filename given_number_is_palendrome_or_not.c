#include <stdio.h>

int isPalindrome(int num);

int main()
{
    int num = 1234321;
    if (isPalindrome(num))
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }
    return 0;
}

int isPalindrome(int num)
{
    int revNum = 0, copy = num;
    while (num > 0)
    {
        int ld = num % 10;
        revNum = (revNum * 10) + ld;
        num /= 10;
    }
    return copy == revNum;
}