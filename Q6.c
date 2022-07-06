#include<stdio.h>
/**Two numbers are input through the keyboard into two locations C and D.
Write a program to interchange the contents of C and D.**/
int main(){

int a,b;
printf("\n Enter 2nos :  ");
scanf("%d%d",&a,&b);
printf("\n A :%d  B: %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n A :%d B: %d",a,b);

return 0;
}
