#include <stdio.h>

char grade;
char status[10];
float percentage;

void calculate(int total, int count)
{
    percentage = (float)total / count;

    if (percentage >= 85)
    {
        grade = 'O';
        sprintf(status, "PASS");
    }
    else if (percentage >= 75)
    {
        grade = 'A';
        sprintf(status, "PASS");
    }
    else if (percentage >= 60)
    {
        grade = 'B';
        sprintf(status, "PASS");
    }
    else if (percentage >= 40)
    {
        grade = 'C';
        sprintf(status, "PASS");
    }
    else
    {
        grade = 'F';
        sprintf(status, "FAIL");
    }
}

float getPercentage()
{
    return percentage;
}

char getGrade()
{
    return grade;
}

char* getStatus()
{
    return status;
}