#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Factorial = %d",fact(n));
    getch();
}
int fact(int n)
{
    if (n>=1)
    {
        printf("Fact = %d",n*fact(n-1));
    }
    else
    {
        return 1;
    }
}