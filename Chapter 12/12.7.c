#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float s;
	s=1.0;
	i=2;
	while(i<=100)
	{
		s=s+1.0/i;
		i=i+2;
	}
	printf("Sum Of Series=%f",s);
	getch();
}
