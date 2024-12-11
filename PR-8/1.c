#include <stdio.h>

char str[10];
char *ptr = str;

void main()
{

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int length = 0;
    do
    {
        length++;
        ptr++;
    } while (*ptr != '\0');

    printf("the string of length : %d", length);
}