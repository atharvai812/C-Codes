// Do while: 4
// 143_Inamdar Atharva Atul

#include<stdio.h>
#include<conio.h>
	void main()
{
	int i=3,n,t1=0,t2=1,nextTerm;
	nextTerm=t1+t2;
	clrscr();
	printf("Enter the number of terms ");
	scanf("%d",&n);

	printf("Fibonacci series : %d,%d",t1,t2);

	do{

		printf(",%d",nextTerm);
		t1=t2;
		t2=nextTerm;
		nextTerm=t1+t2;
		++i;

	}
	while(i<=n);
	getch();
}