#include <stdio.h>
#include <conio.h>
int evenodd();
void main()
{
    clrscr();
    evenodd();
    getch();
}
int evenodd()
{
    int num;
    printf("Enter the Number\n");
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        printf("\nNumber is Even.");
    }
    else
    {
        printf("\nNumber is Odd.");
    }
}