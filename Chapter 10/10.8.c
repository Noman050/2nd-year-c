#include<stdio.h>
#include<conio.h>
main()
{
    char name[50],adress[150];
    printf("Enter Your Name\n");
    gets(name);
    printf("Enter Your Adress\n");
    gets(adress);
    printf("Yor Name=%25s\n",name);
    printf("Your Adress=%-25s\n",adress);
    getch();
}
