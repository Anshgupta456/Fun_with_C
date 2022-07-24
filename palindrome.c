#include <stdio.h>
int main()
{
    int number, rev, rem, sum;
    printf("Enter the number = ");
    scanf("%d", &number);
    int num = number;
    while(number>=1){
        rem = number % 10;
        rev = rev*10 + rem;
        sum = sum + rem;
        number = number/10;
    }
    if(rev == num){
        printf("Palindrome number");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}