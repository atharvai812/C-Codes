#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter the number from 1 to 5");
	scanf("%d",&num);
	switch(num){
		case 1:
		printf("\n one");
		break;

		case 2:
		printf("\n two");
		break;

		case 3:
		printf("\n three");
		break;

		case 4:
		printf("\n four");
		break;

		case 5:
		printf("\n five");
		break;

		default:
		printf("\n invalid Entry");
		break;

	}
	getch();
  }


