#include <stdio.h>

main()
{
    int size, i;

    printf("enter number of element : ");
    scanf("%d", &size);

    int a[size], b[size], sum;

    printf("array 1\n");

    for (i = 0; i < size; i++)
    {
        printf("enter element %d : ", i + 1);
        scanf("\t%d", &a[size]);
    }

    printf("array 2\n");

    for (i = 0; i < size; i++)
    {
        printf("enter element %d : ", i + 1);
        scanf("\t%d", &b[size]);
    }

    for (i = 0; i < size; i++)
    {
        sum = a[size] + b[size];
    }

    printf("element assending value");

    printf("%d", sum);
}