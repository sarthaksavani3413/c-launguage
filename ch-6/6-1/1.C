#include<stdio.h>
#include<conio.h>

main(){

     int no1,no2;
     clrscr();

     printf("enter your first number : ");
     scanf("%d",&no1);

     printf("enter your second number : ");
     scanf("%d",&no2);

     if (no1<no2)
     {
	       printf("%d is minimum :",no1);
     }
     else
     {
	       printf("%d is minimum :",no2);
     }
     getch();
}