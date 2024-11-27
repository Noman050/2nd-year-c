#include<stdio.h>
#include<conio.h>
main()
{
	int y;//very important numrical
	printf("Enter the year\n");
	scanf("%d",&y);
	if(y%4==0)
	printf("It is leap year",y);
	else
	printf("It is not a leap year",y);
	getch();
}
