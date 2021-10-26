#include<stdio.h>
#include<ctype.h>
void main(){
char i;
int sum = 0,n=0,d=0;
FILE *file;
float avg,c=1.0;
file = fopen("sample.txt", "r+");
while ((i=(fgetc(file))) != EOF)
{ 
    if(isdigit(i))
    { 
       n = i - '0';
       d=d*10+n;
       printf("%d\n",d);
    }
    else
    {
        if(i=='\n')
        {
            sum=sum+d;
            d=0;
            c++;
        }
    }
}
avg=(sum+d)/c;
printf("%f",avg);
fclose(file);
}





