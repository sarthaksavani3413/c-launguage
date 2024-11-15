#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	
	clrscr();
		
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j%2);
		}
		printf("\n");
	}
	getch();
}
