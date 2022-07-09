//Dangling Pointer

//A pointer pointing to a memory location that
//has been deleted (or freed) is called dangling pointer.
#include<stdio.h>
#include<stdlib.h>

int * value()
{
    int a=10;
    return &a;
}

int main()
{
    int *ptr=NULL;
    ptr=value(); //&a
    printf("%d",*ptr);
    return 0;
}


