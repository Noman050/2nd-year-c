#include<stdio.h>
#include<conio.h>
main()
{
	long n,f,i;  // n for number f for factorial i for loop
	printf("Enter A Number\n");
	scanf("%d",&n);
	i=1;
	f=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("Factorial=%d",f);
	getch();
}
