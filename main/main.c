#include <stdio.h>
#define MAX_BUFFER_SIZE  100

int main(int argc, char *arg[])
{
    // Variable Initiation
    char user_input[MAX_BUFFER_SIZE] = "";
    
    // Process the command line
    printf("The number of command line arguments is: %d\n\n", argc);

    for (int n = 0; n < argc; n++)
    {
        printf("%d: %s\n", n, arg[n]);
    }

    // Take user commands
    while (fgets(user_input, sizeof(user_input), stdin) != 0)
    {
        // Show the user their input and check its valid
        printf("%s\n", user_input);

        // When its valid break the loop
    }

    // parse the user request:
    // --f "C:\Users\FAKENAME\Documents\Data\text_files\mobydick.txt" --c --w --o
}
