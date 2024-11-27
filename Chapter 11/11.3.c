#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,m;
	printf("Enter The First Number\n");
	scanf("%d",&a);
	printf("Enter 2nd Number\n");
	scanf("%d",&b);
	printf("Enter Third Number\n");
	scanf("%d",&c);
    m=a;
	if(b>m)
	m=b;
	if(c>m)
	m=c;
	printf("maximum Number is=%d",m);
	getch();
}
