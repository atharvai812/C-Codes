#include<stdio.h>
#include<conio.h>
  void main()
  {
  int year;
  clrscr();
  printf("Enter the year");
  scanf("%d",&year);
  if (year%4==0)
  {
  printf("this is Leap year");
  }
  else
  {
  printf("this is not a Lear year");
  }
  getch();
  }
