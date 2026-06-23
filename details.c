#include <stdio.h>

int main() {
    char names[3][20] = {"Himanshu", "Mayank", "Anshuman"};
    char subjects[3][3][20] = {
        {"Maths", "Science", "English"},
        {"Physics", "Chemistry", "Biology"},
        {"Hindi", "History", "Geography"}
    };

    int marks[3][3] = {
        {85, 78, 90},
        {88, 92, 81},
        {75, 80, 88}
    };

    printf("----- STUDENT RECORDS -----\n\n");

    for(int i = 0; i < 3; i++) {
        printf("Student Name: %s\n", names[i]);

        for(int j = 0; j < 3; j++) {
            printf("  %s: %d\n", subjects[i][j], marks[i][j]);
        }

        printf("\n");
    }

    return 0;
}