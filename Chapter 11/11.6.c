#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int n;
	float sq;
	printf("Enter a Number\n");
	scanf("%d",&n);
	if(n>=0)
	{sq=sqrt(n);
	printf("Squre Root=%f",sq);
}
	else
	printf("Wrong Input\n");
	getch();
}
