#include <stdio.h>

main()
{
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("\n Negative elements in the array are : ");
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            printf("%d\n", array[i]);
        }
    }
}