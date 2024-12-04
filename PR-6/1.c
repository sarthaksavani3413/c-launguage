#include <stdio.h>
#include <string.h>
main()

{
    int size = 20;
    char name[size];

    printf("enter any name:-");
    scanf("%[^\n]", &name);

    char copy[size];

    for (int i = 0; i < size; i++)
    {
        copy[i] = name[i];
    }

    int length = strlen(copy);
    int j = length - 1;
    int temp;

    for (int i = 0; i < j; i++)
    {
        temp = copy[i];
        copy[i] = copy[j];
        copy[j] = temp;
        j--;
        i++;
    }

    int condition = 0;

    for (int i = 0; i < length; i++)
    {
        if (name[i] != copy[i])
        {
            condition = 1;
            break;
        }
    }

    if (condition == 1)
    {
        printf("this name is not palindrom...");
    }
    else
    {
        printf("this name is palindrom...");
    }
}