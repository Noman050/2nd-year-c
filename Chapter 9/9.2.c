#include<stdio.h>
#include<conio.h>
 main()
{
	int a;
	printf("Enter an Integer\n");
	scanf("%d",&a);
	a+=50;//Here We Can Use Any Value
	printf("Compoud Addition=%d\n",a);
	a-=50;
	printf("Compoud Subtration is=%d\n",a);
	a*=50;
	printf("Compoud Multiplication is=%d\n",a);
	a/=50;
	printf("Compoud Division is=%d\n",a);
	a%=50;
	printf("Compoud Modolus is=%d\n",a);
	getch();
}
