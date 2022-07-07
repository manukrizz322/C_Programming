/*
A Cashier has currency notes of denominations 10,50
and 100. If the amount to be withdrawn is input through
the keyboard in hundreds.find the total number of currency
notes of each denomination the cashier will have to give
to the withdrawer.
1275
100*12=>1200
50*1=>50
10*2=20
    5

*/
#include<stdio.h>
int main(){
int amt;
printf("\nEnter The Amount to Withdraw : ");
scanf("%d",&amt);//1275
printf("\n Required Notes of Rs 100 : %d",(amt/100));
printf("\n Required Notes of Rs 50  : %d",(amt%100)/50);
printf("\n Required Notes of Rs 10  : %d",((amt%100)%50)/10);
printf("\n Amount Still Remaining   : %d",((amt%100)%50)%10);




return 0;


}
