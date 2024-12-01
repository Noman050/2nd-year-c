#include<stdio.h>
#include<conio.h>
main()
{
	long n,i;
	i=1;
	printf("Enter a Number\n");
	scanf("%d",&n);
	do
	{
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
	while(i<=10);
    getch();
}
