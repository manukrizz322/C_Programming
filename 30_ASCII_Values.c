//ASCII  American Standard Code For Information Interchange
/*
128 total character which is used mostly during program.

Total number of Character in ASCII table is 256 (0 to 255).

0 to 31(total 32 character ) is called as ASCII control characters
include 'Escape', 'Backspace' and 'Delete'.

32 to 127 character is called as ASCII printable characters

128 to 255 is called as The extended ASCII codes
*/




#include<stdio.h>
int main()
{
    int i;
    char a='b';
    for(i=0; i<=255; i++)
    {
        printf("\n%d :%c",i,i);




    }
    printf("\n%c :%c",a,a-32);


    return 0;
}



/*
    48-57  -> 0-9
    65-90  -> A-Z
    97-122 -> a-z
    32     -> Space
*/
