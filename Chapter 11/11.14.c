#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	printf("Enter the month\n");
	scanf("%d",&m);
	if(m==1||m==3||m==5||m==7||m==8||m==12)
	printf("31 Days\n");
	else if(m==4||m==6||m==9||m==11)
	printf("30 Days\n");
	else if(m==2)
	printf("28 Or 29 Days\n");
	else
	printf("Invalid Month\n");
}
