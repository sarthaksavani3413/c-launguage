#include<stdio.h>
#include<conio.h>

main(){

     int a=0;
     int n;
     int sum=0;

     clrscr();

     printf("enter any number : ");
     scanf("%d", &n);

     while(a<=n)
     {
	  sum=sum+a;
	  printf("%d\t",a);
	  a++;
     }

     printf("you are answer : %d",sum);

     getch();
}
