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


void display_prompt()
{
	static int firstIteration = 1;
	if(firstIteration == 1)
	{
	  firstIteration = 0;
	}
	printf("$");
}

char read_command(char command, char* parameters)
{
	//will display the prefix prompt(ex: student@student$)
	display_prompt();
	//return;
}
