#include<stdio.h>
#include<conio.h>
void main()
{
	float i,r;
	i=3.0;
	r=1.0;
	do
	{
		r=r+(1.0/i);
		i=i+2;
	}while(i<=99);
	printf("Result is%f",r);
	getch();
}
