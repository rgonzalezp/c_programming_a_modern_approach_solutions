#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a two-digit number:  ");
    scanf("%d", &n);
    if (n / 10 == 1)
    {
        switch (n % 10)
        {
        case 9:
            printf("You entered the number nineteen");
            break;
        case 8:
            printf("You entered the number eightteen");
            break;
        case 7:
            printf("You entered the number seventeen");
            break;
        case 6:
            printf("You entered the number sixteen");
            break;
        case 5:
            printf("You entered the number fifthteen");
            break;
        case 4:
            printf("You entered the number fourteen");
            break;
        case 3:
            printf("You entered the number thirteen");
            break;
        case 2:
            printf("You entered the number twelve");
            break;
        case 1:
            printf("You entered the number eleven");
            break;
        default:
            printf("You entered the number ten");
            break;
        }
    }
    else
    {
        if (n > 10)
        {
            switch (n / 10)
            {
            case 9:
                printf("You entered the number ninty");
                break;
            case 8:
                printf("You entered the number eighty");
                break;
            case 7:
                printf("You entered the number seventy");
                break;
            case 6:
                printf("You entered the number sixty");
                break;
            case 5:
                printf("You entered the number fifty");
                break;
            case 4:
                printf("You entered the number fourty");
                break;
            case 3:
                printf("You entered the number thirty");
                break;
            case 2:
                printf("You entered the number twenty");
                break;
            }
            switch (n % 10)
        {
        case 9:
            printf("-nine");
            break;
        case 8:
            printf("-eight");
            break;
        case 7:
            printf("-seven");
            break;
        case 6:
            printf("-six");
            break;
        case 5:
            printf("-five");
            break;
        case 4:
            printf("-four");
            break;
        case 3:
            printf("-three");
            break;
        case 2:
            printf("-two");
            break;
        case 1:
            printf("-one");
            break;
        }
        }
        else
        {
            switch (n % 10)
            {
            case 9:
                printf("You entered the number nine");
                break;
            case 8:
                printf("You entered the number eight");
                break;
            case 7:
                printf("You entered the number seven");
                break;
            case 6:
                printf("You entered the number six");
                break;
            case 5:
                printf("You entered the number five");
                break;
            case 4:
                printf("You entered the number four");
                break;
            case 3:
                printf("You entered the number three");
                break;
            case 2:
                printf("You entered the number two");
                break;
            case 1:
                printf("You entered the number one");
                break;
            case 0:
                printf("You entered the number zero");
                break;
            }
        }
    }
}
