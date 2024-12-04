#include<stdio.h>
#include<conio.h>

main(){
	
	int n,a=0,b=1,c,i;
	
	clrscr();
	
	printf("enter any number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	
	getch();
	
}
