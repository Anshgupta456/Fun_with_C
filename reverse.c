#include <stdio.h>
int main()
{
    int num, rev, rem, sum;
    printf("Enter the number = ");
    scanf("%d", &num);
    while(num>=1){
        rem = num % 10;
        rev = rev*10 + rem;
        sum = sum + rem;
        num = num/10;
    }
    printf("Sum = %d", sum);
    printf("\n Reversed number is = %d", rev);
    return 0;
}