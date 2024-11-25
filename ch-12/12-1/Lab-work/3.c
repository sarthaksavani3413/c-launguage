#include <stdio.h>

main()
{
	int size;

	printf("enter number of element : ");
	scanf("%d", &size);

	int a[size];

	printf("\n\tarray 1\n");

	for (int i = 0; i < size; i++)
	{
		printf("enter element %d :", i + 1);
		scanf("%d", &a[i]);
	}

	int b[size];

	printf("\n\tarray 2\n");

	for (int i = 0; i < size; i++)
	{
		printf("enter element %d :", i + 1);
		scanf("%d", &b[i]);
	}

	int sum [5];

	for (int i = 0; i < size; i++)
	{
	    sum[i] += a[i] + b[i];
	}
    for(int i=0;i<size;i++)
    {
        printf("array sum %d\n", sum[i]);
    }

}