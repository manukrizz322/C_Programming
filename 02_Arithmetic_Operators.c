#include<stdio.h>
int main(){
int a,b,c;
float x;
printf("\nEnter 2nos : \n");
scanf("%d%d",&a,&b);
c=a+b;
printf("\nTotal : %d",c);
c=a*b;
printf("\nMul : %d",c);
c=a-b;
printf("\nDifference : %d",c);
x=(float)a/(float)b;
printf("\nDiv : %0.2f",x);
c=a%b;
printf("\nMod : %d",c);



}
