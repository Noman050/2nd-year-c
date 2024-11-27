#include<stdio.h>
#include<conio.h>
main()
{
        int a,b,c;
        printf("Enter Three Numbers\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a<b)
        {
        	if(a<c)
        	printf("%d Is Smallest Number\n",a);
        	else
        	printf("%d Is Smallest Number\n",b);
        }
        else
		{
	    if(b<c)
        printf("%d is smallest Number",b);
        else
        printf("%d Is the smallest Number",c);
    }
        getch();
}

