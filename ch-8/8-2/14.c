#include<stdio.h>
#include<conio.h>

main(){

     int b=1;
     int n;

	clrscr();
	
     printf("enter any number : ");
     scanf("%d",&n);

     do
     {
	     if(b%2==0)
	     {
		    printf("%d\t",b);
	     }
	     b++;
     }while(b<=n);

     getch();

}
