#include<stdio.h>
#include<conio.h>

main(){

    int a,b;

    clrscr();

    printf("enter the first year : ");
	scanf("%d",&a);

	printf("enter the second year : ");
	scanf("%d",&b);

    while(a<=b)
	{
	    if(a%4==0)
	    {
	      printf("%d\t",a);
	    }
	    a++;
	}

	getch();

}
