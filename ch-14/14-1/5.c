#include <stdio.h>

main()
{
    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]", &name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ')
        {
            if (name[i] >= 'a' && name[i] <= 'z')
                name[i] = name[i] - 32;
            else
                name[i] = name[i];
        }
        printf("%c", name[i]);
    }
}