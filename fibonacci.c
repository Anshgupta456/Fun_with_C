#include <stdio.h>
int main()
{
    int n, fibonacci,i;
    printf("Enter the no. of terms = ");
    scanf("%d", &n);
    int t1 = 0;
    int t2 = 1;
    printf("%d\t%d\t", t1,t2);
    while(i < n-2){
        int next = t1 + t2;
        fibonacci = next;
        t1 = t2;
        t2 = next;
        i++;
        printf("%d\t", fibonacci);
    }
    return 0;
}