#pragma once
#ifndef _TEXT_PROCESSING_HEADER_H_
#define _TEXT_PROCESSING_HEADER_H_

/* Standard Library Imports */
#include <stdio.h>
#include <stdbool.h>

/* Global Defines */
#define MAX_BUFFER_SIZE  100

/* Global Variables */
bool com_char, com_word, com_tok_word, com_tok_sent, com_clean = false;

/* Function Definitions */
void process_user_inputs(int num_commands, char* commands[]);
void print_function_help(void);
















#endif