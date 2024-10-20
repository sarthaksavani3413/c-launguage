#include<stdio.h>
#include<conio.h>

main(){

     int b=1;
     int n;

     clrscr();

     printf("enter any number : ");
     scanf("%d",&n);

     while(b<=n)
     {
	     if(n%2!=0)
	     {
		    printf("%d\t",n);
	     }
	     n--;
     }

     getch();

}
