#include<stdio.h>
#include<conio.h>
int main()
{   int n,a,b,c;
    char chioce;
do{
    printf("What Operation Do You Want To Do?\n\n");
    printf("Press 1 For Adittion\n\n");	
    printf("Press 2 For Subtraction\n\n");
    printf("Press 3 For Multiplication\n\n");
    printf("Press 4 For Division\n\n");
    scanf("%d",&n);
    printf("Please Enter A Number\n");
    scanf("%d",&a);
    printf("Please Enter Second Number\n");
    scanf("%d",&b);
    switch(n)
{
	case 1:
	c=a+b;
	printf("Adition Of Two Numbers Is %d",c);
 	break;
	case 2:
	c=a-b;
	printf("Subtraction Of Two Numbers Is %d",c);
	break;
	case 3:
	c=a*b;
	printf("Multiplication Of Two Numbers Is %d",c);
	break;
	case 4:
	c=a/b;
	printf("Division Of Two Numbers Is %d",c);
	break;
	default:
	printf("Wrong Input");
}
	printf("\nDo You Want To Continue y/n\n?");
	chioce=getche();	
}
    while(chioce=='y');	
    getch();
	return 0;
}
