#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float per;
    char grade[3];
    char status[10];

    printf("ENTER MARKS OF 5 SUBJECTS\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Enter marks of Subject %d (0-100): ", i + 1);
        scanf("%d", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid Marks! Enter between 0 to 100");
            return 0;
        }

        total += marks[i];
    }

    per = total / 5.0;

    if(per >= 90) {
        sprintf(grade, "A+");
        sprintf(status, "PASS");
    }
    else if(per >= 75) {
        sprintf(grade, "A");
        sprintf(status, "PASS");
    }
    else if(per >= 60) {
        sprintf(grade, "B");
        sprintf(status, "PASS");
    }
    else if(per >= 40) {
        sprintf(grade, "C");
        sprintf(status, "PASS");
    }
    else {
        sprintf(grade, "F");
        sprintf(status, "FAIL");
    }

    printf("\n\n------ STUDENT RESULT ------\n");
    printf("Total Marks : %d\n", total);
    printf("Percentage : %.2f%%\n", per);
    printf("Grade      : %s\n", grade);
    printf("Status     : %s\n", status);

    return 0;
}