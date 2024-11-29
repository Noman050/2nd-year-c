#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf("Enter The Character\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	printf("Entered Character %c Is A Capital case letter\n",ch);
	else if(ch>='a' && ch<='z')
	printf("Entered Character %c Is Small case letter\n",ch);
	else if(ch>='0' && ch<='9')
    printf("Entered Character %c Is Digital Number\n",ch);
    else
    printf("Entered Character %c Is a Special Symbol\n",ch);
    
  
}
