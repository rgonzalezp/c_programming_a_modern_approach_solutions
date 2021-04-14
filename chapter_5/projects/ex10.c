#include <stdio.h>

int main(void)
{
    int grade, gradeunit;
    char letter;
    printf("Enter numerical grade with 2 digits (00):  ");
    scanf("%1d%1d", &grade, &gradeunit);
    if ((10 * grade + gradeunit) > 10)
    {
        switch (grade)
        {
        case 9:
            letter = 'A';
            break;
        case 8:
            letter = 'B';
            break;
        case 7:
            letter = 'C';
            break;
        case 6:
            letter = 'D';
            break;

        default:
            letter = 'F';
            break;
        }
    }
    else
    {
        letter = 'F';
    }

    // scanf("%d",&grade);

    // if (grade <= 59)
    //     letter = 'F';
    // else if (grade < 70)
    //     letter = 'D';
    // else if (grade < 80)
    //     letter = 'C';
    // else if (grade < 90)
    //     letter = 'B';
    // else if (grade >= 90)
    //     letter = 'A';

    printf("Letter grade: %c", letter);
}
