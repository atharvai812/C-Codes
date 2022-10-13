#include<stdio.h>
#include<conio.h>
	void main()
	{
	int rem,num,count=1,sum;
	clrscr();
	while(count<=1000)
	{
	num=count;
	sum=0;

	while(num)
	{
	rem=num%10;
	sum=sum+(rem*rem*rem);
	num=num/10;
	}

	if(count==sum)
	{
	printf("%d is a armstrong number\n",count);
	}
	count++;
	}
	getch();
	}
