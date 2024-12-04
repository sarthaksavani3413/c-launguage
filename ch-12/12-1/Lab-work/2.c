#include <stdio.h>

main() 
{
    int size,i;

    printf("Enter number of element : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++) 
	{
        printf("Enter element %d :", i+1);
        scanf("%d", &array[i]);
	}
    
    int sum=0;
    
    for(int i = 0; i < size; i++)
    	sum += array[i];
    		
    printf("array sum %d\n",sum);
    
    printf("array average %.2f",(float)sum/size);
    
}

