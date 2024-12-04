#include<stdio.h>
#include<conio.h>

main(){

     int a=1;
     int n;

     clrscr();

     printf("enter any number : ");
     scanf("%d", &n);

     while(n>=a)
     {
	  printf("%d\t",n);
	  n--;
     }

     getch();
}
