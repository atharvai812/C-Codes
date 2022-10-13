#include<stdio.h>
#include<conio.h>
  void main()
  {
  int age;
  clrscr(),
  printf("Enter the Age");
  scanf("%d",&age);
  if(age>=18)
  {
  printf("You are now Adult");
  }
  else
  {
  printf("you are now kid");
  }
  getch();
  }