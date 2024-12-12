#include <stdio.h>

struct Student
{
    char name[20];
    int rollno, chem, maths, phy, total;
    float pr;
};

int main()
{
    struct Student st[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\n Enter details for student %d: \n", i + 1);

        printf("\nRoll Number: ");
        scanf("%d", &st[i].rollno);

        printf("Name: ");
        scanf(" %[^\n]", st[i].name);

        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &st[i].chem);

        printf("Maths Marks (out of 100): ");
        scanf("%d", &st[i].maths);

        printf("Physics Marks (out of 100): ");
        scanf("%d", &st[i].phy);

        st[i].total = st[i].chem + st[i].maths + st[i].phy;

        st[i].pr = st[i].total / 3;
    }

    for (i = 0; i < 5; i++)
    {
        printf("-------------------------------------------");
        printf("\n\n%s (%d)", st[i].name, st[i].rollno);
        printf("\nChemistry => %d", st[i].chem);
        printf("\nMathematics => %d", st[i].maths);
        printf("\nPhysics => %d", st[i].phy);
        printf("\nTotal => %d", st[i].total);
        printf("\nPercent => %.2f", st[i].pr);
    }
}