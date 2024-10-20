#include<stdio.h>
#include<conio.h>

main(){
	
		int n,p;
		
		clrscr();
		
		printf("enter any number : ");
		scanf("%d",&n);
		
		p=0;
		
		do
		{
			n = n / 10;
			p++;
			
		}while(n!=0);
		
		printf("number of digit : %d",p);
		
		getch();
}
