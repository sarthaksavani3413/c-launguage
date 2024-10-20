#include<stdio.h>
#include<conio.h>

main(){
     int a,n;
     int res=0;
     int rem;
     
     clrscr();

     printf("enter any number : ");
     scanf("%d",&n);

     a=n;
     do
     {
	 rem = a % 10;
	 res = res*10 +rem;
	 a = a / 10;
     }while(a!=0);
     
     if(res==n)
     {
	  printf("%d is palidrom number : ",res);
     }
     else
     {
	  printf("%d is not palidrom number : ",res);
     }

     getch();
}
