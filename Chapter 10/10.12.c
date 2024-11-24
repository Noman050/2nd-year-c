#include<stdio.h>
#include<conio.h>
main()
{
	int km,m;
	printf("Enter The Distance In Kilometers\n");
	scanf("%d",&km);
	m=1000*km;
	printf("Distance In Meters=%d",m);
	scanf("%d",&m);
	getch();
}
