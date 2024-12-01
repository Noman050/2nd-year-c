#include<stdio.h>
#include<conio.h>
main()
{
	int t,i,r;   //t for table i for loop r for result this is most imp Numerical
	printf("Enter The Number\n");
	scanf("%d",&t);
	i=1;
	while(i<=10)
	{
		r=t*i;
		printf("%d*%d=%d\n",t,i,r);
		i++;
	}
    getch();
}
