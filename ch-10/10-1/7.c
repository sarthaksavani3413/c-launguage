#include<stdio.h>
#include<conio.h>

int main() {
    int i,j;
	
	clrscr();  

    for (i = 0; i < 5; i++) 
	{
        for (j = i; j >= 0; j--) 
		{
            printf("%c ", 'A' + j);  
        }
        printf("\n"); 
    }
	getch();
}

