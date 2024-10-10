#include<stdio.h>
#include<conio.h>

main(){
     int j,k,l;

     clrscr();

	   printf("enter any number : ");
	   scanf("%d",&j);

	   printf("enter any number : ");
	   scanf("%d",&k);

	   printf("enter any number : ");
	   scanf("%d",&l);

	   (j<k)
		 ? printf("%d is minimum number",j)
		 : printf("%d is minimum number",j);

       getch();
}