#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    printf("Enter elements of Array 1:\n");
    for (int i = 0; i < size; i++)
    {
        printf("array1[%d] = ", i);
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of Array 2:\n");
    for (int i = 0; i < size; i++)
    {
        printf("array2[%d] = ", i);
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < size; i++)
    {
        int temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

    printf("\nswapping array:\n");
    printf("Array 1: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\nArray 2: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array2[i]);
    }
}