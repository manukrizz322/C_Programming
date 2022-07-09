//Write a File
#include<stdio.h>
int main()
{
   FILE *fp;
   fp=fopen("sample.txt","w");
   //fp=fopen("Sample.txt","a");
   fprintf(fp,"\nStanley\n");
   fclose(fp);
    return 0;
}
