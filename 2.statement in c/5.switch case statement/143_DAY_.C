#include<stdio.h>
#include<conio.h>
	void main()
{
	int num;
	clrscr();
	printf("enter the day number");
	scanf("%d",&num);
	switch(num)
		{
		case 1:
		printf("\n Monday");
		break;

		case 2:
		printf("\n Tuesday");
		break;

		case 3:
		printf("\n Wenesday");
		break;

		case 4:
		printf("\n Thursday");
		break;

		case 5:
		printf("\n Friday");
		break;

		case 6:
		printf("\n Saturday");
		break;

		case 7:
		printf("\n Sunday");
		break;

		default:
		printf("\n Invalid Entry");
		break;
	}
	getch();
}

