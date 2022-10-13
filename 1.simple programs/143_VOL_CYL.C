#include<stdio.h>
#include<conio.h>
void main()
{
  int r,h;
  clrscr();
  float v;
  printf("Enter the value of r and h");
  scanf("%d%d",&r,&h);
  v=3.14*r*r*h;
  printf("volume=%f",v);
  getch();
}