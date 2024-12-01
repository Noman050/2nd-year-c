#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,f;
	printf("Enter The Number\n");
	scanf("%d",&n);
	i=1;
	f=1;
	do
	{
		f=f*i;
		i=i+1;
	}
	while(i<=n);
	printf("Factorial of %d is=%d",n,f);
	getch();
}
