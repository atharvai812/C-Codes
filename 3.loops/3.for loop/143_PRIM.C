// FOR LOOP PRIME NO
// 143_Inamdar Atharva Atul

#include<stdio.h>
#include<conio.h>
	void main()
	{
	int n,i,count=0;
	clrscr();
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i == 0){
			count=1;
			break;}
			}
		if (count == 1){
			printf("not prime");      }

		else  {printf("prime");
		}
	getch();
	}