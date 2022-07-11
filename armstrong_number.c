#include <stdio.h>

int main() 
{
    int num, digit, cube, sum, i, number;
    printf("Enter three digit number = ");
    scanf("%d", &num);
    number = num;
    for(i = 0; i < 4; i++ ){
        digit = num % 10;
        cube = digit * digit * digit;
        sum += cube;
        num = num /10;
    }
    printf("%d", sum);
    
    if(sum == number){
        printf("\n%d is Armstrong Number", number);
    }
    else{
        printf("\n%d is not Armstrong Number", number);
    }
    return 0;
}