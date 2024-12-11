#include <stdio.h>

void cube(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(ptr + i) = *(ptr + i) * *(ptr + i) * *(ptr + i);
    }
}

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    cube(arr, n);

    printf("Array elements after cubing: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
