#include<stdio.h>
int main()
{
char ch;
scanf("%d",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
printf("%c is alphabet",ch);
else
printf("%c is consonant",ch);
return 0;
}
