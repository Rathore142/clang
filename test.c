// comment -- compiler ignores
// wap in switch to print week days according to user input.
#include <stdio.h>
int main()
{
    int ch;
    printf("Mon\n");
    printf("Tues\n");
    printf("Weds\n");
    printf("Thurs\n");
    printf("Fri\n");
    printf("Sat\n");
    printf("Sun\n");

    printf("Enter any no from the menu -\n");
    scanf("%d", &ch); // inputs data from user

    switch (ch)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("Tuesday");
        break;
    }
    case 3:
    {
        printf("wednesday");
        break;
    }
    case 4:
    {
        printf("thrusday");
        break;
    }
    case 5:
    {
        printf("thrusday\n");
        break;
    }
    case 6:
    {
        printf("friday");
        break;
    }
    case 7:
    {
        printf("saturday");
        break;
    }
    default:
        printf("Invalid");
    }
    return 0;
}
