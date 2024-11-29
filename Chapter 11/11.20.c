#include<stdio.h>
#include<conio.h>
main()
{
     int n;
     printf("Enter a Number\n");
     scanf("%d",&n);
     if(!(n%2==0))
     printf("Entered Number is odd\n");
     else
     printf("Entered Number is Even\n");
     getch();
}
