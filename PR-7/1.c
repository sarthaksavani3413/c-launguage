#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}
int divide(int num1, int num2)
{
    if (num2 != 0)
    {
        return num1 / num2;
    }
    else
    {
        printf("not divide by zero....");
        return 0;
    }
}
int moduls(int num1, int num2)
{
    return num1 % num2;
}
void main()
{

    int c;
    int d, e;
    for (int i = 0; i < 1; i++)
    {
        printf("\n enter 1 for + ");
        printf("\n enter 2 for - ");
        printf("\n enter 3 for * ");
        printf("\n enter 4 for / ");
        printf("\n enter 5 for %% ");
        printf("\n enter 0 for the exit  \n\n");

        printf("enter your choice:-");
        scanf("%d", &c);

        if (c == 0)
        {
            break;
        }
        else if (c >= 1 && c <= 5)
        {
            printf("enter the first number:-");
            scanf("%d", &d);
            printf("enter the second number:-");
            scanf("%d", &e);
        }
        switch (c)
        {
        case 1:
            printf("\naddition is %d & %d :- %d\n", d, e, add(d, e));
            break;
        case 2:
            printf("\nsubtraction is %d & %d :- %d\n", d, e, subtraction(d, e));
            break;
        case 3:
            printf("\nmultiplaction  is %d & %d :- %d\n\n", d, e, multiplication(d, e));
            break;
        case 4:
            printf("\nDivision  is %d & %d :- %d\n\n", d, e, divide(d, e));
            break;
        case 5:
            printf("\nModulus  is %d & %d :- %d\n\n", d, e, moduls(d, e));
            break;
        default:
            printf("\n\nInvalid choice !!.. please try again...\n");
        }
    }
}
