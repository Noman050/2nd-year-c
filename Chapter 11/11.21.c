#include<stdio.h>
#include<conio.h>
main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    switch(ch)
    {
    	case 'a':
    	case 'A':
		printf("Entered Character is Vowel\n");
		break;
		case 'e':
		case 'E':
		printf("Entered Character Is Vowel\n");
		break;
		case 'i':
		case 'I':
		printf("Entered Character Is Vowel\n");
		break;
		case 'o':
		case 'O':
		printf("Entered Character Is Vowel\n");
		break;
		case 'u':
		case 'U':
		printf("Entered Character Is Vowel\n");
		break;
		default:
		printf("Entered Character Is consonant\n");
	}
	    getch();	
}
