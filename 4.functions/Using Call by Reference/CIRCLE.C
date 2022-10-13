#include<stdio.h>
#include<conio.h>

float cir(float* r);
float area(float* r);
void main()
{
    float r;
    clrscr();
    printf("Enter the value of R\n");
    scanf("%f",&r);
    cir(&r);
    area(&r);
    getch();
}
float cir(float* f)
{
	float c;
	c= 2 * 3.14 * ( *f );
	printf("\nCircumference = %f",c);
	return 0;
}
float area(float* g)

{
	float c;
	c=3.14 * ( *g ) * ( *g );
	printf("\nArea = %f",c);
	return 0;
}