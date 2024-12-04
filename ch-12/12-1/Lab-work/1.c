#include <stdio.h>

main()
{
	int size;

	printf("enter number of element : ");
	scanf("%d", &size);

	int a[size];

	for (int i = 0; i < size; i++)
	{
		printf("enter element %d :", i + 1);
		scanf("%d", &a[i]);
	}
	printf("the length of array is %d", size);
}
