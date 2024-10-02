#include <stdio.h>
#include <conio.h>

main(){
     int r;
     float pi=3.14;
     clrscr();

     printf("enter the pi value : ");
     scanf("%f",&pi);
     printf("enter the radius value : ");
     scanf("%f",&r);
     printf("enter the circle value : %f",2*pi*r);

     getch();
}