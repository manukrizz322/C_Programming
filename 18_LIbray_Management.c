#include<stdio.h>
int main()
{
    int days;
    printf("\n Enter The Days : ");
    scanf("%d",&days);
    if(days>=1&&days<=5)
    {
        printf("\nFine Amount 0.50 Paise");

    }
    else if(days>=6&&days<=10)
    {
        printf("\nFine Amount 1Rupee");
    }
    else if(days>=11&&days<=29)
    {
        printf("\nFine Amount 5 Rupee");


    }
    else
    {

        printf("\n membership will be canceled");
    }
    return 0;
}
