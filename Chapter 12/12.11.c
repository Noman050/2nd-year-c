#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	i=1;
	do
	{
		if(i%2==1) //or if(i%2!=0)
		printf("%d\n",i);
		i++;
	}
	while(i<=20);
	getch();
}
