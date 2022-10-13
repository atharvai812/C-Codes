#include<stdio.h>
#include<conio.h>

float area(float b,float h);
int main()
{
	float b,h,a;
	//clrscr
	printf("enter base and height of triangle: \n");
	scanf("%f%f",&b,&h);
	a=area(b,h);
	printf("Area: %f\n",a);
	getch();
}
float area(float b,float h)
{
	return (b*h)/2;
}