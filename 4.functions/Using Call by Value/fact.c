#include <stdio.h>
#include <conio.h>
int fact();
void main()
{
    clrscr();
    fact();
    getch();
}
int fact()
{
    int i,f=1,num;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    printf("Factorial = %d",f);
}