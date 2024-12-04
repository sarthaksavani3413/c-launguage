#include <stdio.h>
#include <string.h>

main()
{
    char name[20];

    printf("Enter any string : ");
    scanf("%[^\n]", &name);

    int length = strlen(name);

    for (int i = 0; i < length; i++)
    {
        int f = 1;

        for (int j = i + 1; j < length; j++)
        {
            if (name[i] == name[j])
            {
                f++;
                name[j] = NULL;
            }
        }

        if (name[i] != NULL)
            printf("%c => %d\n", name[i], f);
    }
}