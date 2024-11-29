#include<stdio.h>
#include<conio.h>
main()
{
     int a,b,c;
     printf("Enter Three Numbers\n");
     scanf("%d%d%d",&a,&b,&c);
     if(a>b && a>c)
     printf("Maximum Number is=%d",a);
     else if(b>a && b>c)
     printf("Maximum Number Is=%d",b);
     else
     printf("Maximum Number is=%d",c);
     getch();
}
