#include<stdio.h>
#include<conio.h>

main(){

     int a,b,c;

     clrscr();

     printf("enter the first number : ");
     scanf("%d",&a);

     printf("enter the second number : ");
     scanf("%d",&b);

     printf("enter the third number : ");
     scanf("%d",&c);

     if(a<b)
     {
	  if(a<c)
	      printf("%d is minimum number",a);
	  else
	      printf("%d is minimum number",c);
     }
     else
	  if(b<c)
	       printf("%d is minimum number",b);
	  else
	       printf("%d is minimum number",c);

      getch();

     }