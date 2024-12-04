#include<stdio.h>
#include<conio.h>

main(){

     int j,k;

     clrscr();

     printf("enter the value j : ");
     scanf("%d",&j);

     printf("enter the value k : ");
     scanf("%d",&k);

     j=j+k;
     k=j-k;
     j=j-k;

     printf("\nafter swapping value : %d %d",j,k);


     getch();

}