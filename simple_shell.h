/**************************************************************
* Class:  CSC-415-0# Summer 2020
* Name: Kevin Chan
* Student ID: 918468621
* Project: Assignment 3 - Simple Shell
*
* File: simple_shell.h
*
* Description: This is the header file to all the functions needed
* for this assignment.
*
**************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//might not be a string return
void display_prompt();
char read_command(char command, char* parameters);
