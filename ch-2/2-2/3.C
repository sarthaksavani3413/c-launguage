#include <stdio.h>
#include <conio.h>
#define pi 3.14

main(){
     int r;
     clrscr();

     printf("enter radius value :");
     scanf("%d",&r);
     printf("area of circle : %.2f",pi*r*r);

     getch();
}
