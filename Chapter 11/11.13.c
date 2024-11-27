#include<stdio.h>
#include<conio.h>
main()
{
	 float r,a,c;
	 int choice;
	 printf("Enter Radius\n");
	 scanf("%f",&r);
	 printf("Enter 1 for Area and Enter 2 For Circumference\n");
	 scanf("%d",&choice);
	 if(choice==1)
	 {
	 a=3.14*r*r;
     printf("Area of circle=%f\n",a);
     }
   	 else if(choice==2)
   	 {
     c=2.0*3.14*r;
     printf("Circumference=%f\n",c);
     }
     else
	printf("Invalid Choice\n");
}
