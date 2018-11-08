#include <stdio.h>
#include <stdlib.h>
#include "errorcheck.h"

float getlowrange(char grade);

int main()
{
    // Ask the user for a letter grade.
    printf("Enter a letter grade A-F: ");

    // Store the entered value into a char variable.
    char userinput;
    scanf("%c", &userinput);

    // Start error checking process.
    if (errorcheck(userinput) == OK)
    {
        // Print the success message then show lowest possible score.
        printf("\nSUCCESS: You entered %c \n", userinput);

        printf("Lowest possible score for this letter grade: %.if", getlowrange(userinput));

    }
    else
    {
        // Print ERROR, you did not give the data.
        printf("\nERROR: Not a valid entry! \n");
    }

    return 0;
}

float getlowrange(char grade)
{
    float returnval;

    switch(grade)
    {
    case 'A':
    case 'a':
    returnval = 93.9F;
    break;

    case 'B':
    case 'b':
    returnval = 82.9F;
    break;

    case 'C':
    case 'c':
    returnval = 72.9F;
    break;

    case 'D':
    case 'd':
    returnval = 62.9F;
    break;

    case 'F':
    case 'f':
    returnval = 0.F;
    }

    return returnval;
}
