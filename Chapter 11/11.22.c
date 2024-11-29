#include<stdio.h>
#include<conio.h>
main()
{//imp up to infinite
	int a,b;
	char op;
	printf("Enter 1 Number Operater And 2nd Number\n");
	scanf("%d%c%d",&a,&op,&b);
	switch(op)
	{
		case '+':
	    printf("sum=%d",a+b);
	    break;
	    case '-':
	    printf("Subtraction=%d",a-b);
	    break;
	    case '*':
	    printf("Multiplication=%d",a*b);
	    break;
	    case '/':
	    printf("Division=%d",a/b);
	    break;
	    case '%':
	    printf("Modolus=%d",a%b);
	    break;
	    default:
	    printf("Invalid operater");
	  	}
	  	getch();
}
