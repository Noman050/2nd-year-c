#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float r,a,c;
	printf("Enter The Radius\n");
	scanf("%f",&r);
	a=4.0*3.14*r*r;
	c=(4.0*3.14*r*r*r)/3.0;
	printf("Area of sphere=%f\n",a);
	printf("Circumference=%f\n",c);
	getch();
}
