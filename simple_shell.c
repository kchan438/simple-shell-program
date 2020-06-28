/**************************************************************
* Class:  CSC-415-0# Summer 2020
* Name: Kevin Chan
* Student ID: 918468621
* Project: Assignment 3 - Simple Shell
*
* File: simple_shell.c
*
* Description: This file is where all functions are located.
*
**************************************************************/

#include "simple_shell.h"

#define buffer_size 1024

void read_command(char command_line [], char* parameters [])
{
	printf("prompt$");
	//get user input and save it into command_line
	fgets(command_line, buffer_size, stdin);
	
	//this line will exit if the user types in exit
	if( strcmp(command_line, "exit") == 0)
	{
	   exit(0);
	}
	//get the length of command_line
	size_t length = strlen(command_line);
	
	//if user inputs more than 1024 bytes, we will truncate it
	/*if(length > buffer_size)
	{
	  int truncated_length = length - buffer_size;
	  length -= truncated_length;
	  command_line[length-1] = '\0';
	}*/
	//if the command_line contains a \n char, we'll need to
	//replace it with a null character
	if(command_line[length-1] == '\n')
	{
	  command_line[length-1] = '\0';
	}
	//we're going to need to get each token from the command
	//line
	char* token;
	//separated by a space character
	token = strtok(command_line, " ");
	int i = 0;
	//this while loop will pass the tokens into parameter array
	while(token != NULL)
	{
	  parameters[i] = token;
	  token = strtok(NULL, " ");
	  i++;
	}
	//setting the last character a null terminator
	parameters[i] = '\0';
}



