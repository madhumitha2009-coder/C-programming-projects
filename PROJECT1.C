#include<stdio.h>
int main()
{
float a,b;
char ch;
clrscr();
printf("%d,Enter the expression");
scanf("%f %c %f",&a,&ch, &b);
switch(ch)
{
case'+':
printf("%f",a+b);
break;

case'-':
printf("%f",a-b);
break;

case'*':
printf("%f",a*b);
break;

case'/':
printf("%f",a/b);
break;

default:
printf("%c,Ivalid character");
}
return 0;
}