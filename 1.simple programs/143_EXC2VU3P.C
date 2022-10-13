#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,b=10,t;
clrscr();
printf("a=%d\nb=%d",a,b);
t=a;
a=b;
b=t;
printf("a=%d\nb=%d",a,b);
getch();
}

