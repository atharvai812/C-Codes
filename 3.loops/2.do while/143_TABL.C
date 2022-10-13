#include<stdio.h>
#include<conio.h>
	void main()
	{
	int num,i=1,n;
	clrscr();
	printf("Enter the number \n");
	scanf("%d",&num);

	do{
	       n=num*i;
	       printf("\n %d \n",n);
	       i++;

	}while(i<=10);
	getch();

}