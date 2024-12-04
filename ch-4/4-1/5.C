#include<stdio.h>
#include<conio.h>

main(){

     int m,n,o;

     clrscr();

     printf("enter the value m : ");
     scanf("%d",&m);

     printf("enter the value n : ");
     scanf("%d",&n);

     o=m;
     m=n;
     n=o;

     printf("\nswapping value : %d %d",m,n);


     getch();

}