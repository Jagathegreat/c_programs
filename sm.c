#include<stdio.h>

int main() {
    int s1, s2, s3, s4, s5, s6, grade;
    float per;

    // Input marks for 6 subjects
    printf("Enter the marks for 6 subjects: ");
    scanf("%d %d %d %d %d %d", &s1, &s2, &s3, &s4, &s5, &s6);

    // Calculate the percentage
    per = (s1 + s2 + s3 + s4 + s5 + s6) / 6.0;

    // Print the percentage
    printf("Percentage: %.2f\n", per);

    // Determine the grade category by dividing the percentage by 10
    grade = (int)per / 10;

    // Switch case to determine the grade
    switch(grade) {
        case 10: // Percentage is 100%
        case 9:
            puts("Grade A");
            break;
        case 8:
            puts("Grade B");
            break;
        case 7:
            puts("Grade C");
            break;
        case 6:
            puts("Grade D");
            break;
        case 5:
        case 4:
            puts("Grade E");
            break;
        default:
            puts("Grade F");
            break;
    }

    return 0;
}

