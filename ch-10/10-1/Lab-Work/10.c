#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	
	clrscr();
		
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d\t",j%2);
		}
		printf("\n");
	}
	getch();
}
