#include<stdio.h>
#include<conio.h>
main()
{
	int s,e,i;//s is starting number e ending number i loop
	printf("Enter The Starting Number\n");
	scanf("%d",&s);
	printf("Enter The Ending Number\n");
	scanf("%d",&e);
	i=s;//cause loop starts from starting number
	while(i<=e)
	{
	   if(i%2==0)
	   printf("Even Number=%d\n",i);
	   i++;
	}
	getch();
}
