/**If a five-digit number is input through the keyboard,
write a program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’)**/

#include<stdio.h>
int main()
{
    int a,b,d,f,sum=0;
    printf("\nEnter 5 Digit No : ");
    scanf("%d",&a);//12345
    b=a/10;//1234
    sum+=a%10;//5
    d=b/10;//123
    sum+=b%10;//4
    f=d/10;//12
    sum+=d%10;//3
    sum+=f/10;//1
    sum+=f%10;//2

    printf("\nTotal : %d",sum);

    printf("\n_______________________________________");

    /**
    int a,b,c,d,e,f,g,h,i,sum=0;
        printf("\nEnter 5 Digit No : ");
        scanf("%d",&a);//12345
        b=a/10;//1234
        c=a%10;//5
        sum+=c;//sum=sum+5
        d=b/10;//123
        e=b%10;//4
        sum+=e;
        f=d/10;//12
        g=d%10;//3
        sum+=g;
        h=f/10;//1
        sum+=h;
        i=f%10;//2
        sum+=i;
        printf("\nTotal : %d",sum);**/




    return 0;
}
