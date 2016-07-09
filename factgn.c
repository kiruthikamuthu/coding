#include<stdio.h>
int main()
{
int n,fact=0,i;
scanf("%d",&n);
for(i=0;i<=n;i++)
fact=fact*i;
printf("%d of fact:",fact);
return 0;
}
