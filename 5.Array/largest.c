#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], i, large;
    // clrscr();
    printf("Enter the 10 numbers in Array");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    large=a[0];
    for (i = 0; i <= 9; i++)
    {
        if(a[i]>=large)
        {
            large = a[i];
        }
    }
    printf("Largest Number = %d", large);
    getch();
}