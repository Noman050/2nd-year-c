#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter The First Number\n");
	scanf("%d",&a);
	printf("Enter The Second Number\n");
	scanf("%d",&b);
	printf("Value Of A Before Exchange=%d\n",a);
	printf("Value Of B Before Exchange=%d\n",b);
	c=a;
	a=b;
	b=c;
	printf("Value Of A After Change=%d\n",a);
	printf("Value Of B After Change=%d\n",b);
	getch();
}
