#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5], i, j, t;
    // clrscr();
    printf("Enter the 5 numbers in Array");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if (a[i] < a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for ( i = 0; i <=4; i++)
    {
        printf("%d,",a[i]);
    }
}
    