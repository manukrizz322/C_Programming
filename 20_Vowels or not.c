#include<stdio.h>
int main()
{
    char c;
    printf("\nEnter The Character : ");
    scanf("%c",&c);
    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a Vowel",c);
        break;
    default:
        printf("%c is not a Vowel",c);
        break;




    }



return 0;




}
