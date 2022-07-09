#include<stdio.h>
int main()
{
    int a[100],i,n,e=0,o=0;
    printf("\nEnter The LImit : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter The Value:  ");
        scanf("%d",&a[i]);
        a[i]%2==0?e++:o++;

    }
    printf("\nTotal Even No is :%d",e);
    printf("\nTotal Odd No is  :%d",o);
    return 0;
}
