#include<stdio.h>
#include<conio.h>
main()
{
	int u,b;
	float sr,tb;//tb=Total Bill
	printf("Enter The Units\n");
	scanf("%d",&u);
	if(u>500)
	b=u*7;
	else if(u>300)
	b=u*5;
	else 
	b=u*2;
	b=b+150;
	sr=0.0;
	if(b>200)
	sr=0.05*b;
	tb=b+sr;
	printf("Total bill=%f",tb);
	getch();
	
}
