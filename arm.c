#include<stdio.h>
int main()
{
int n;
r=0;
scanf("%d",&n);
while(n!=0)
{
r=n%10;
re=re+r*r*r;
n=n/10;
}
if(n==re)
{
printf("%d is armstrong num",n)
else
printf("%d is not anarmstrong num",n)
result 0;
}
}
