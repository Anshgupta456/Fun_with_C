#include <stdio.h>
#include <math.h>

int main()
{
    
    int num;
    printf("Enter the number = ");
    scanf("%d", &num);
    int a = pow(num, 1);
    int b = pow(num, 2);
    int c = pow(num, 3);
    printf("First three powers of given number are %d, %d, %d respectively", a,b,c);
    return 0;

}