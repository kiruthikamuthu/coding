#include<stdio.h>
int main()
{
int i;
if(i>=0)
printf("num is positive");
else if(i<0)
printf("num is negative");
else
printf("num is zero");
return 0;
}
