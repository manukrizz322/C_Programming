
/*
12.If the total selling price of 15 items and
the total profit earned on them is input through the
keyboard, write a program to find the cost price of
one item.
200
50
200-50=150/15=15

*/
int main(){

 float s,p,c,tcp;
 printf("\nEnter The Selling price of 15 Items : ");//200
 scanf("%f",&s);
 printf("\nEnter The Profit : ");
 scanf("%f",&p);
 c=(s-p)/15;
 tcp=c*15;
 printf("\nCost Price of 1 Item is Rs.%0.0f",c);
 printf("\nCost Price of 15 Items is Rs.%0.0f",tcp);




return 0;

}
