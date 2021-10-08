#include "text_processing.h"

void process_user_inputs(int num_commands, char* commands[])
{
    /* Initialise Key Variables */
    char user_input[MAX_BUFFER_SIZE] = "";
      
    // Process the command line
    printf("The number of command line arguments is: %d\n\n", num_commands);
    for (int n = 0; n < num_commands; n++)
    {
        printf("%d: %s\n", n, commands[n]);
    }

    // test to see if any commands have been given
    if(num_commands < 2) 
    {
        print_function_help();

        // Take user commands
        while (fgets(user_input, sizeof(user_input), stdin) != 0)
        {
            // Show the user their input and check its valid
            printf("%s\n", user_input);

            // Parse the user input and determine what the user wanted
            // Use that to set the global command variables, all prefixed with "com_"

            // When its valid break the loop
        }

    }
    
    // return the file path of the input file and output file in a variable sized structure
    // Use Maloc & free,

}

void print_function_help(void)
{
    printf("\n*****************************\n");
    printf("*  Text Processing Program  *\n");
    printf("*****************************\n\n");

    printf("Command Line Options:\n\n");

    printf("\t--f\tThe file to process.\n");
    printf("\t--o\tThe file to output results to.\n");
    printf("\t--c\tCount the chars.\n");
    printf("\t--w\tCount the words.\n");
    printf("\t--tw\tTokenise all words.\n");
    printf("\t--ts\tTokenise sentences\n");
    printf("\t--ts\tClean file (lowercase + remove non-alpha numeric)\n");


    // --f "C:\Users\FAKENAME\Documents\Data\text_files\mobydick.txt" --c --w --o
}