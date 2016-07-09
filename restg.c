#include<stdio.h>
int main()
{
char str[100];
int i=0,j,temp;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("%s reverse is:",str);
return 0;
}
