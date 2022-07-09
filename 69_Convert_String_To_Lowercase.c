// Write a program to convert string to lowercase in c program
#include<stdio.h>
int main()
{
    /*
        a-z  => 97-122
        A-Z  => 65-90
        0-9  => 48-57
        space => 32
    */
    char a[100];
    int i;
    printf("\nEnter The String : ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
            a[i]=a[i]+32;
    }
    puts(a);
    return 0;
}
