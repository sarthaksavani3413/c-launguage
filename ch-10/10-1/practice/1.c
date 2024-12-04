#include<stdio.h>
#include<conio.h>

main()
{
	
	int i,j,n;
	
	clrscr();
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			if(j%2==0)
			{
				printf("%c",j+64);
			}
			else
			{
				printf("%d",i);
			}
		}
		printf("\n");
	}
	getch();
}
