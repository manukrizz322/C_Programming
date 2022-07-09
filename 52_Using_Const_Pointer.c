#include<stdio.h>
int main()
{
    /**
    //case 1:
    char a[3]={'a','b','c'};
    const char *p=a;
    printf("\n *p=%c",*p);
    //*p='x';//cannot change the value its const
    p++;
    printf("\n *p=%c",*p);**/

    /**
    //case 2:
    char a[3]= {'a','b','c'};
    char const *p=a;
    printf("\n *p =%c",*p);
    //*p='x'//cannot change the value its const
    p++;
    printf("\n *p=%c",*p);**/

    //case 3:
    char a[3]={'a','b','c'};
    char *const p=a;
    printf("\n *p =%c",*p);
    *p='x';
    //p++;//cannot change the value its const
    printf("\n *p =%c",*p);



    return 0;
}
