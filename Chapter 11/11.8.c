#include<stdio.h>
#include<conio.h>
main()
{
	float salary,bonus;
	int grade;
	printf("Enter The Salary\n");
	scanf("%f",&salary);
	printf("Enter the Grade\n");
	scanf("%f",&grade);
	if(grade>15)
	bonus=salary*(50.0/100.0);
	else
	bonus=salary+(20.0/100.0);
    salary=salary+bonus;
    printf("Total salary is Rs.%.2f",salary);
    getch();
}
