#include<stdio.h>
int main(){
int a,b,c,d,f,h;
printf("\nEnter The 4 Digit No : ");
scanf("%d",&a);//1234
b=a/10;//123
c=a%10;//4
d=b/10;//12
f=d/10;//1
h=f+c;
printf("\nSum of digits : %d",h);
return 0;
}
