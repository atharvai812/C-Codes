#include<stdio.h>
#include<conio.h>
  void main()
  {
  int x,y,z;
  clrscr();
  printf("Enter the value of X,Y,Z");
  scanf("%d%d%d",&x,&y,&z);
  if(x>y && x>z)
  {
  printf("\n x is Greatest");
  }
  if(y>x && y>z)
  {
  printf("\n y is Greatest");
  }
  if(z>x && z>y)
  {
  printf("\n z is Greatest");
  }
  getch();
  }