#include<stdio.h>
#include<conio.h>

main(){

     int a=1;
     int n;
     int ans;

     clrscr();

     printf("enter any number : ");
     scanf("%d", &n);

     while(a<=10)
     {
	  ans=n*a;

	  printf("\n %d * %d = %d \t \n",n,a++,ans);

     }

     getch();
}
