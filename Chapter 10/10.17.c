#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,sum,product;
	float avg;
	printf("Enter Four Numbers\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	sum=a+b+c+d;
	product=a*b*c*d;
	avg=sum/4.0;
	printf("sum=%d\n",sum);
	printf("Product=%d\n",product);
	printf("Average=%5.2f\n",avg);
	getch();
	
}
