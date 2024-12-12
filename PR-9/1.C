#include <stdio.h>

int main()
{
    FILE *even, *odd;
    int i;

    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if (even != '\0' && odd != '\0')
    {
        for (i = 50; i <= 70; i++)
        {
            if (i % 2 == 0)
            {

                fprintf(even, "%d\n", i);
            }
            else
            {

                fprintf(odd, "%d\n", i);
            }
        }
    }
    fclose(even);
    fclose(odd);
}