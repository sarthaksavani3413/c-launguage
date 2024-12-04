#include <stdio.h>

main()
{

    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]", &name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ' || i == 0)
        {
            if (name[i] >= 'a' && name[i] <= 'z')
                name[i] = name[i] - 32;
            else if (name[i] >= 'A' && name[i] <= 'Z')
                name[i] = name[i] + 32;
        }
        printf("%c", name[i]);
    }
}