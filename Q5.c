/**
The length & breadth of a rectangle and radius of a circle are input through the keyboard.
 Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle
**/
#include<stdio.h>
int main(){
float l,b,r_area,r_peri,r,c_area,cir;
printf("\nEnter Length & Breadth\n");
scanf("%f%f",&l,&b);
printf("\n Enter Radius : \n");
scanf("%f",&r);
r_area=l*b;
r_peri=(2*(l+b));
c_area=3.14*r*r;
cir=2*3.14*r;
 printf("\nArea of Rectangle : %0.2f",r_area);
    printf("\nPerimeter of Rectangle : %0.2f",r_peri);
    printf("\nArea of Circle : %0.2f",c_area);
    printf("\nCircumference of Circle : %0.2f",cir);

    return 0;
}
