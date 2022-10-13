#include<stdio.h>
#include<conio.h>
 void main()
 {
 int n;
 clrscr();
 printf("Enter the number");
 scanf("%d",&n);
 if(n>0)
 {
 printf("\n number is positive");
 }
 else if(n<0)
 {
 printf("\n number is negative");
 }
 else
 {
 printf("\n number is zero");
 }
 getch();
 }