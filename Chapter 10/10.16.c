#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,n;
	printf("Enter 3-Digit Number\n");
	scanf("%d",&n);
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	printf("Number in reverse order is=%d%d%d",n,b,a);
	getch();
	
}
