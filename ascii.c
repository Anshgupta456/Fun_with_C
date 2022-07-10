#include <stdio.h>
int main()
{
    
    char letter;
    printf("Enter the Letter = ");
    scanf("%c", &letter);
    int ascii;
    ascii = letter;
    if(ascii >= 65 && ascii <= 90){
        printf("Uppercase alphabet");
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        printf("Lowercase alphabet");
    }
    else
   {
     if(ascii >= 48 && ascii <= 57)
     {
      printf("A Digit");
     }
     else
     {
     printf("A Special Symbol\n\n");
     }
   }
    return 0;

}