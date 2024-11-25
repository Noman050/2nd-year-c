#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter Height In Inches\n");
	scanf("%d",&a);
	b=2.54*a;
	printf("Height In Centimeters=%d",b);
	getch();
}
