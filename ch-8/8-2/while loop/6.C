#include<stdio.h>
#include<conio.h>

main(){
     int a,gem,rem,sum=0,mul=1;

     clrscr();

	printf("enter any number : ");
	scanf("%d",&a);

	gem = a;

	while(gem != 0)
	{
		  rem = gem % 10;

		  sum += rem;
		  mul *= rem;

		  gem /= 10;
	}
	if(sum == mul)
	{
		printf("%d is magic number : ",a);
	}
	else
	{
		printf("%d is not  magic number : ",a);
	}
     getch();
}
