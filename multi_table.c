#include <stdio.h>

int main() 
{
    int num, i;
    printf("Enter the number = ");
    scanf("%d", &num);
    for(i = 1; i < 11; i++){
        int res = num * i;
        printf(" %d * %d = %d\n", num, i, res);
    }
    return 0;
}
// ***---- USING WHILE LOOP ----***
// #include <stdio.h>

// int main() 
// {
//     int num, i;
//     printf("Enter the number = ");
//     scanf("%d", &num);
//     i = 1;
//     while(i < 11){
//         int res = num * i;
//         printf(" %d * %d = %d\n", num, i, res);
//         i++;
//     }
//     return 0;
// }