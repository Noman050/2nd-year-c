#include<stdio.h>
#include<conio.h>
main()
{
	int s;
	float d,rs;
	printf("Enter the salary\n");
	scanf("%d",&s);
	if(s>=20000)
	d=0.07*s;
	else if(s>=10000)
	d=1000.0;
	else
	d=0.0;
	rs=s-d;
	printf("Net Salary =%f",rs);
	getch();
}
