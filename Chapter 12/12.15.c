#include<stdio.h>
#include<conio.h>
void main()
{
	int i,b,p,r;
	printf("Enter two Numbers\n");
	scanf("%d%d",&b,&p);
	i=1;
	r=1;
	do
	{
		r=r*b;
		i++;
	}while(i<=p);
	printf("Result is %d",r);
	getch();
}
