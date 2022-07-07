#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\nEnter 5 Marks : \n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5.0;
    printf("\nTotal   : %d",total);
    printf("\nAverage :%f",avg);

    if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
    {

        printf("\nResult :Pass");
        if(avg>=90&&avg<=100)
        {

            printf("\nGrade   :A Grade");
        }
        else if(avg>=80&&avg<=90)
        {

            printf("\nGrade   :B Grade");
        }
        else if(avg>=70&&avg<=79)
        {
            printf("\nGrade   :C Grade");

        }
        else
        {
            printf("\nGrade   :D Grade");
        }
    }
    else
    {
        printf("\nResult   :Fail");
        printf("\nGrade    :No Grade");
    }


    return 0;
}
