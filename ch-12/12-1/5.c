#include <stdio.h>

int main()
{
    int size;

    // Input: size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Input: elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    // Removing duplicate elements
    int newSize = size; // Size of the array after removing duplicates
    for (int i = 0; i < newSize; i++)
    {
        for (int j = i + 1; j < newSize; j++)
        {
            if (array[i] == array[j])
            {
                // Shift elements to the left to overwrite the duplicate
                for (int k = j; k < newSize - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                newSize++;
            }
        }
    }

    printf("\nArray removing duplicates:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
