#include<stdio.h>
#include<conio.h>

main()

{
	int n,f,l,s;

	clrscr();

	printf("enter any number :");
	scanf("%d",&n);

	l=n%10;

	do
	{
	      n/=10;
	      
	}while(n>=10);
	
	f=n;

	s=f+l;

	printf("sum of first end last digits %d\n",s);

	getch();

}
