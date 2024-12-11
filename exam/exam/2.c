#include <stdio.h>

void main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int sum = sum1(array, size);
    printf("The sum of array elements: %d\n", sum);

    return 0;

    int sum1(int arr[], int size);
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += array[i];
        }
        return sum;
    }
}
