#include<stdio.h>
#include<conio.h>
main()
{
	float a,b;
	int Result;
	printf("Enter First Float Value\n");
	scanf("%f",&a);
	printf("Enter Second Float Value\n");
	scanf("%f",&b);
	Result=(int)a%(int)b;
	printf("Remainder is=%d\n",Result);
	getch();
}
