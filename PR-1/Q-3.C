#include<stdio.h>
#include<conio.h>

main(){

     int angle1,angle2,angle3;

     clrscr();

     printf("enter the angle of trinagle : ");
     scanf("%d",&angle1);

     printf("enter thef angle of trinagle : ");
     scanf("%d",&angle2);

     angle3 = 180 - (angle1+angle2);

     printf("angle is answer : %d",angle3);

     getch();
}
