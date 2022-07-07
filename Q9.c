/*
 In a town,the percentage of men is 52. The percentage
 of total literacy is 48 If total percentage of literate
  men is 35 of the total population,write a program to
  find the total number of illiterate men and women if the
  population of the town is 80,000.

*/

#include<stdio.h>
int main(){

int pop=80000,popmen,popwomen,poplit,litmen,litwomen,ilitmen,ilitwomen;
popmen=(52*pop)/100;
popwomen=pop-popmen;
poplit=(48*pop)/100;
litmen=(35*poplit)/100;
litwomen=poplit-litmen;
ilitmen=pop-litmen;
ilitwomen=pop-litwomen;


printf("\nTotal Population       : %d",pop);
printf("\nTotal Mens             : %d",popmen);
printf("\nTotal womens           : %d",popwomen);
printf("\nTotal literacy         : %d",poplit);
printf("\nTotal Literacy mens    : %d",litmen);
printf("\nTotal Literacy womens  : %d",litwomen);
printf("\nTotal ILiteracy mens   : %d",ilitmen);
printf("\nTotal ILiteracy womens : %d",ilitwomen);





return 0;
}
