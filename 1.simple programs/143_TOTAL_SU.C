#include<stdio.h>
#include<conio.h>
   void main()
   {
   int a,b,c,d,e,n,t ;
   float g;
   clrscr();
   printf("Enter the name of student");
   scanf("%s",&n);
   printf("name of student is %s",n);
   printf("input the values of 5 subjects");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   t=a+b+c+d+e;
   g=t/5;
   printf("\nTotal:%d\nAvg:%f",t,g);
   getch();
   }