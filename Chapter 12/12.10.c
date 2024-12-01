#include<stdio.h>
#include<conio.h>
main()
{
	int i,c; // i for loop and c for cube
	i=1;
	do
	{
	c=i*i*i;
	printf("%d\t%d\n",i,c);
	i++;
    }
    while(i<=5);
    getch();
}
