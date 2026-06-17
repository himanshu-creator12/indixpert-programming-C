#include <stdio.h>

int main()
{
    int marks[3];
    char subject_1[20];
    char subject_2[20];
    char subject_3[20];
    int total = 0;

    printf("Please enter first subject: ");
    scanf("%s", subject_1);

    printf("Please enter second subject: ");
    scanf("%s", subject_2);

    printf("Please enter third subject: ");
    scanf("%s", subject_3);

    printf("\nPlease enter marks for %s, %s, and %s:\n",
           subject_1, subject_2, subject_3);

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    float percentage = total / 3.0;

    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f\n", percentage);

    return 0;
}