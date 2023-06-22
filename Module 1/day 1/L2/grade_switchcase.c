#include <stdio.h>

void CalculateGrade(int marks) {
    char grade;

    switch (marks / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Grade: %c\n", grade);
}

int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    CalculateGrade(marks);

    return 0;
}
