#include<stdio.h>
#include<conio.h>
main()
{
	int i,s;
	i=1;
	s=0;
	while(i<=5)
	{
		printf("%d\n",i);
		s=s+i;
		i++;
	}
	printf("sum=%d",s);
	getch();
}
