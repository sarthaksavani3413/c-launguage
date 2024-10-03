#include<stdio.h>
#include<conio.h>

main(){

     float t,f;

     clrscr();

     printf("enter the temperature value : ");
     scanf("%f",&t);

     f=(t*1.8)+32;

     printf("answer the feranhit value : %.2f",f);

     getch();
}