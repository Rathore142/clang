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

    printf("Enter any no from the menu -");
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

    default:
        printf("Invalid");
    }
    return 0;
}
