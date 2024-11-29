#include<stdio.h>
#include<conio.h>
main()
{
      char ch;
      printf("Enter Character\n");
      scanf("%c",&ch);
      if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
      printf("Entered Number is Vowel=%c\n",ch);
      else
      printf("Entered Number is Not Vowel=%c",ch);
      getch();
  }

