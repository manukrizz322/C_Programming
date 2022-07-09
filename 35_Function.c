#include<stdio.h>
/**

//No Return Without Argument Function in C
//Function Declaration
void add();

int main()
{
//Function Calling
    add();
    return 0;


}
//Function Definition
void add()
{
int a,b,c;
printf("\nEnter The Value of A & B :\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("\nTotal : %d",c);



}**/

/**
//No Return With Argument Function in C

int main()
{
    int a,b;
    printf("\nEnter The Value of A&B : ");
    scanf("%d%d",&a,&b);
    add(a,b);//Actual Parameters
    return 0;
}
int add(int x,int y)//Formal parameters
{
    int c;
    c=x+y;
    printf("\nTotal : %d",c);


}**/
/**
//Return Without Argument Function in C
#include<stdio.h>
int main()
{
    int a;
    a=add();
    printf("\nTotal : %d",a);
    return 0;

}
int add(){

 int a,b;
    printf("\nEnter The Value of A & B : ");
    scanf("%d%d",&a,&b);
    return a+b;

}**/

//Return With Argument Function in C

#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    printf("\nEnter The Value of A & B : ");
    scanf("%d%d",&a,&b);
    a=add(a,b);
    printf("\nTotal : %d",a);
    return 0;
}

int add(int x,int y)
{
    return x+y;
}

