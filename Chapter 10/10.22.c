#include<stdio.h>
#include<conio.h>
#define pi 3.141
main()
{
	float c,r;
	printf("Enter The Radius\n");
	scanf("%f",&r);
	c=2*pi*r;
	printf("Circumference=%f",c);
	getch();
}
