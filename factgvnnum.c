#include<stdio.h>
int main()
{
long f;
int n,n1,n2,i;
scanf("%d%d",&n1,&n2);
for(n=n1;n<=n2;n++)
{
f=1;
for(i=1;i<=n;i++)
f=f*i;
printf("%ld",f);
}
return 0;
}

