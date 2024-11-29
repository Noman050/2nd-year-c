#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter Three Numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b)
	{
		if(a==c)
		printf("All Numbers Are Equal\n");
		else
		printf("Numbers are different\n");
	}
	else
	printf("Numbers are different\n");
	getch();
}
