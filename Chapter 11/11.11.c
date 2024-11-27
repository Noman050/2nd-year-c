#include<stdio.h>
#include<conio.h>
main()
{
	int m;                                       //m is score of student
	printf("Enter The test score\n");
	scanf("%d",&m);
	if(m>=90)
	printf("A Grade\n");
	else if(m>=80)
	printf("B Grade\n");
	else if(m>=70)
	printf("C Grade\n");
	else
	printf("D Grade\n");
	getch();
}
