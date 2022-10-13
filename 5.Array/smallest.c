#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], i, small;
    // clrscr();
    printf("Enter the 10 numbers in Array");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    small=a[0];
    for (i = 0; i <= 9; i++)
    {
        if(a[i]<=small)
        {
            small = a[i];
        }
    }
    printf("Smallest Number = %d", small);
    getch();
}