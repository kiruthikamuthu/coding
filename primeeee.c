#include<stdio.h>
int main()
{
int n1,n2,f,i;
scanf("%d%d",&n1,&n2);
while(n1<n2)
f=0;
for(i=2;i<=n1/2;i++)
if(n1%i==0)
f=1;
break;
if(f==0)
printf("%d",n1);
++n1;
return 0;
}
