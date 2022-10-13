#include<stdio.h>
#include<conio.h>

void main(){
	float kelo,c,i,f,m;
	clrscr();
	printf("Enter the distance in kelometer");
	scanf("%f",&kelo);
	m=kelo/1000;
	c=m/100;
	i=c/2.54;
	f=i/12;
	printf("Distance = %f,\nIn Meter= %f\n In centimeter = %f\nIn Inches=%f \n In Fit %f",kelo,m,c,i,f);
	getch();

}