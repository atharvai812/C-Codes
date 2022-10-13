#include<stdio.h>
#include<conio.h>

void main(){
	int mark;
	clrscr();
	printf("Enter the marks");
	scanf("%d",&mark);
	if(mark >= 85 && mark <= 100){
		printf("Congratulations you are in Merit");
	}
	else if(mark >= 75 && mark >=84){
		printf("Congrats you are in Distinction");
	}
	else if(mark >= 60 && mark >= 74){
		printf("you are in First class");
	}
	else if(mark >= 50 && mark >= 59){
		printf("you are in Second class");
	}
	else{
		printf("unfortuately you are Fail");
	}
	getch();
}