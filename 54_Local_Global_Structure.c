//Local and Global Scope Structure in C Programming
#include<stdio.h>
struct student
{
    char *name;
    int age;
    float per;
};
void total()
{
    struct mark
    {
        int m1,m2,m3;
    } s;

    s.m1=50;
    s.m2=50;
    s.m3=50;
    printf("\nMark-1     :%d",s.m1);
    printf("\nMark-2     :%d",s.m2);
    printf("\nMark-3     :%d",s.m3);


}
int main()
{
    struct student o;
    o.name="Tutor Joes";
    o.age=30;
    o.per=85.5;

    printf("\nName    :%s",o.name);
    printf("\nAge     :%d",o.age);
    printf("\nPercent :%f",o.per);
    total();
    return 0;

}
