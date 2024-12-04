#include<stdio.h>
#include<stdio.h>

main()
{
	int i,j,n=1;
	
	clrscr();
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d\t",n++);
		}
		printf("\n");
	}
	getch();
}
