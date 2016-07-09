#include<stdio.h>
int main()
{
int n,d;
r=0;
d=n;
scanf("%d",&n);
r=r*10;
r=r+n%10;
d=d/10;
if(n==r)
printf("%d is palindrome",n);
else
printf("%d is not palindrome",n);
return 0;
}
