/*A structure is a user defined data type in C/C++.
 A structure creates a data type that can be used
 to group items of possibly different types into a
  single type.*/

#include<stdio.h>
struct student
{
    char *name;
    int age;
    float per;


};
int main()
{
    struct student o,o2;
     printf("\nSize of Struct : %d",sizeof(o));//16
    printf("\nSize of char : %d",sizeof(char *));//1
    printf("\nSize of int : %d",sizeof(int));//4
    printf("\nSize of float : %d",sizeof(float));//4

    o.name="Tutor Joes";
    o.age=30;
    o.per=85.5;

    o2.name="Manoj Krishnan";
    o2.age=30;
    o2.per=85.5;

    printf("\nName      :%s",o.name);
    printf("\nAge       :%d",o.age);
    printf("\nPercent   :%d",o.per);

    printf("\nName      :%s",o2.name);
    printf("\nAge       :%d",o2.age);
    printf("\nPercent   :%d",o2.per);


return 0;
}
