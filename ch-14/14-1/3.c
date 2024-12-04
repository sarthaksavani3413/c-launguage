#include <stdio.h>

main()
{
    char name[50];

    printf("enter your name : ");
    scanf("%[^\n]", &name);

    printf("enter any string : %s\n", name);

    for (int i = 0; i <= name[i]; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
        else if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
    }

    printf("toggle case string : %s", name);
}