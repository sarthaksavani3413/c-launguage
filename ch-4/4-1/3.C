#include<stdio.h>
#include<conio.h>

main(){

     float a,b,c;

     clrscr();

     printf("enter value of a : ");
     scanf("%f",&a);

     printf("enter value of b : ");
     scanf("%f",&b);

     c=(a-b)*(a-b);

     printf("\n enter value of answer :%.2f",c);

     getch();
}

