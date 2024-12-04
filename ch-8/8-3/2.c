#include<stdio.h>
#include<conio.h>

main(){

     int a=1;
     int n;
     int mul=1;

	 clrscr();     

     printf("enter any number : ");
     scanf("%d", &n);

     for(a=1;a<=n;)
     {
	  mul=mul*a;
	  printf("%d\t",a);
	  a++;
     }

     printf("you are answer : %d",mul);

     getch();
}
