#include<stdio.h>
#include<conio.h>
main()
{float l,b,a,p;
clrscr();
printf("Enter the value of l and b");
scanf("%f%f",&l,&b);
a=l*b;
printf("area=%f\n",a);
p=2*(l+b);
printf("p=%f",p);
getch();
}