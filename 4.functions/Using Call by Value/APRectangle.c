#include <stdio.h>
#include <conio.h>
int rectangle();
void main()
{
    clrscr();
    rectangle();
    getch();
}
int rectangle()
{
    int l, b, a, p;
    clrscr();
    printf("Enter the L and B\n");
    scanf("%d%d", &l, &b);
    a = l * b;
    p = 2 * (l + b);
    printf("Area = %d \nPerimeter = %d", a, p);
}