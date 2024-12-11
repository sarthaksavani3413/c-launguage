#include <stdio.h>

void main(int arr[], int size)
{
    printf("Array elements in reverse number: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sum1(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void main()
{
    int n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    main(array, n);

    int sum = sum1(array, n);

    printf("The sum of array elements: %d\n", sum);

    return 0;
}
