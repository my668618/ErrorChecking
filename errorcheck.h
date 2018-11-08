#ifndef ERRORCHECK_H_INCLUDED
#define ERRORCHECK_H_INCLUDED

#define OK 1
#define NO 0

// Prototypes:
// return name (paremeter)
int errorcheck(char grade);

int errorcheck(char grade)\
{
    // Initialize assuming data is wrong.
    int returnval = NO;

    // Creating a collection of valid input.
    char correctinput[10] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'F', 'f'};

    // Iterate through the correct input characters
    // and see if what the user entered is in the list.

    int i;

    for (i = 0; i < 10; i++)
    {
        if (grade == correctinput[i])
        {
            // We found what we're looking for so stop here.
            returnval = OK;
            break;
        }
    }
    return returnval;
}

#endif // ERRORCHECK_H_INCLUDED
