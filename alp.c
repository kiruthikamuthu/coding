#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if(((ch>='a')&&(ch<='z')||((ch=='A')&&(ch=='Z')))
printf("ch is alphabet");
else
printf("ch is not an alphabet"); 
return 0;
}
