#include <stdio.h>

void main()
{
    int big;
    int y, z;

    printf("press 1 for +\n");
    printf("press 2 for -\n");
    printf("press 3 for *\n");
    printf("press 4 for /\n");
    printf("press 5 for %%\n");

    printf("press your symbol : ");
    scanf("%d", &big);

    printf("Enter your numbers: ");
    scanf("%d", &y);

    printf("Enter your numbers: ");
    scanf("%d", &z);

    switch (big)
    {
    case 1:
        for (int i = 0; i < 1; i++)
        {
            printf("%d + %d = %d\n", y, z, y + z);
        }
        break;
    case 2:
        for (int i = 0; i < 1; i++)
        {
            printf("%d - %d = %d\n", y, z, y - z);
        }
        break;
    case 3:
        for (int i = 0; i < 1; i++)
        {
            printf("%d * %d = %d\n", y, z, y * z);
        }
        break;
    case 4:
        if (z != 0)
        {
            printf("%d / %d \n", y / z);
        }
        else
        {
            printf("Division by zero is not allowed.\n");
        }
        break;
    case 5:
        for (int i = 0; i < big; i++)
        {
            printf("%d %% %d = %d\n", y, z, y % z);
        }
        break;
        if (z != 1)
        {
            printf("%d % %d \n", y % z);
        }
    default:
        printf("your number is Invalid.\n");
    }
    return 0;
}