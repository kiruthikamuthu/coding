#include<stdio.h>
int main()
{
int n1,n2,*p,*q,s;
scanf("%d%d",&n1&n2);
p=&n1;
q=&n2;
s=*p+*q;
printf("%d sum;",s);
return 0;
}
