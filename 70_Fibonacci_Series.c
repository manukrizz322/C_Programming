#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i;
    printf("\nEnter The Limit :  ");
    scanf("%d",&n);//4
    for(i=0; i<n; i++)
    {
        c=a+b;//0 1 1 2
        a=b;//1 0 1
        b=c;//0 1 1
        printf("\n%d",c);


    }


    return 0;
}
