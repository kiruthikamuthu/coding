#include<stdio.h>
int main()
{
int a;
b=2;
scanf("%d",&a);
for(b=2;b<=a-1;b++)
if(a%b==0)
printf("%d is not prime",a);
else
printf("%d is prime",a);
return 0;
}
