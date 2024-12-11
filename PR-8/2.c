#include <stdio.h>

int *a;

int mul()
{
    return (*a) * (*a) * (*a);
}

void main()
{
    int size;

    printf("Enter the size of array :- ");
    scanf("%d", &size);

    int array[size][size];

    printf("Enter array :-- \n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Element[%d][%d] :- ", i, j);
            scanf("%d ", &array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThe cube of the array is :--\n\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", mul(&array[i][j]));
        }
        printf("\n");
    }
}