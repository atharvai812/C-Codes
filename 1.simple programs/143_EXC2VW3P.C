#include<stdio.h>
#include<conio.h>
   void main()
   {
   int a,b;
   clrscr();
   printf("Enter the value of b");
   scanf("%d%d",&a,&b);
   a=a-b;
   b=a+b;
   a=b-a;
   printf("a=%d b+%d",a,b);
   getch();
   }
