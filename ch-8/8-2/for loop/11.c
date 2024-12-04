#include<stdio.h>
#include<conio.h>

main(){

	int n;
	int rem;
	int arm;
	int res=0;

	clrscr();

	printf("enter any number : ");
	scanf("%d",&n);

	for(arm=n;arm!= 0;)
	{
	      rem = arm % 10;
	      res +=rem * rem * rem;
	      arm /=10;
	}

	if(res == n)
		printf("%d is armstrong number : ",n);
	else
		printf("%d is not armstrong number : ",n);

	getch();
}
