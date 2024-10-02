#include<stdio.h>
#include<conio.h>

main(){
     int p,r,t;

     clrscr();

     printf("enter the principle : ");
     scanf("%d",&p);
     printf("enter the rate : ");
     scanf("%d",&r);
     printf("enter the time : ");
     scanf("%d",&t);
     printf("simple interest : %d",p*r*t/100);

     getch();
}
