// 143_Inamdar Atharva Atul
// For loop 4

#include<stdio.h>
#include<conio.h>
	void main()
{
	float x,sum=0,row=1;
	int i,n;
	clrscr();
	printf("Enter the value of x\n");
	scanf("%f",&x);
	printf("Enter the No of terms :\n");
	scanf("%d",&n);

		for(i=1;i<=n;i++)
		{	row=row*x/(float)i;
			sum=sum+row;

		}
	printf("\n the sum is %f\n",sum);
	getch();
}
