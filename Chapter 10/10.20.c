#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,s,area;
	printf("Enter First Number\n");
	scanf("%f",&a);
	printf("Enter Second Number\n");
	scanf("%f",&b);
	printf("Enter Third Number\n");
	scanf("%f",&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area Of Triangle=%f",area);
	getch();
}
