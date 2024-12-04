#include<stdio.h>
#include<stdio.h>

main()
{
	int i,j,n=5;
	
	clrscr();
	
	for(i=1;i<=5;i++)
	{
		int num=j;
		for(j=1;j<=i;j++)
		{ 	
			printf("%d\t",num);
			
			num=num+(n-j);
		}
		printf("\n");
	}
	getch();
}
