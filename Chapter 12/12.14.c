#include<stdio.h>
#include<conio.h>
void main()
{
	int s,e,i;
	i=1;
	printf("Enter Starting Number\n");
	scanf("%d",&s);
	printf("Enter Ending Number\n");
	scanf("%d",&e);
	i=s;
	do
	{
		if(i%2!=0)
		printf("%d\n",i);
		i++;
	}while(i<=e);
	getch();
}
