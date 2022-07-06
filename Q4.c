/**
Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees.


**/
#include<stdio.h>
int main(){
float f,c;
printf("\nEnter the Temperature :  ");
scanf("%f",&f);
c=(f-32)*(5.0/9.0);
printf("\nResult : %0.2f",c);




return 0;
}
