/**
The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print this distance in meters, feet, inches and centimeters.
**/

#include<stdio.h>
int main(){
    float km,m,i,cm,ft;
    printf("Enter The Kilometer : ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
    printf("\n KM : %0.2f",km);
    printf("\n M : %0.2f",m);
    printf("\n CM : %0.2f",cm);
    printf("\n IN : %0.2f",i);
    printf("\n FT : %0.2f",ft);



return 0;
}


