#include <stdio.h>
#include <string.h>

int main()
{
    char fname[11];
    printf("Enter First name ");
    scanf("%s", fname);
    char mname[11];
    printf("\nEnter Middle name ");
    scanf("%s", mname);
    char lname[11];
    printf("\nEnter Last name ");
    scanf("%s", lname);
    printf("Abbreviated name is %c.%c. %s", *fname,*mname, lname);
    //printf("Abbreviated name is %c.%c. %s", fname[0], mname[0], lname);
    return 0;

}