#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number = ");
    scanf("%d", &number);
    int count = 0;
    while(number != 0){
        number = number/10;
        count++;
    }
    printf("Length of number is %d", count);
    return 0;
}
