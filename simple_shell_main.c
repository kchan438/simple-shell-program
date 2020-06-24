/**************************************************************
* Class:  CSC-415-0# Summer 2020
* Name: Kevin Chan
* Student ID: 918468621
* Project: Assignment 3 - Simple Shell
*
* File: simple_shell_main.c
*
* Description: This is the main file where the program runs
*
**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#define buffer_size 1024

int main(int argc, char* argv[])
{
	
	//char command_arg[buffer_size];
	//char command_line[buffer_size];
	char *envp[] = { (char *) "PATH=/bin", 0 };
	while(1)
	{
	  //will display the prefix prompt(ex: #student@student->)
	  ////display_prompt();
	  //will take in user input
	  //readCommand(command, parameters);
	  //fork();
	  if(fork() !=0)
	  {
	    wait(NULL);
	  }
	  else
	  {
	    //strcpy(command_line, "/bin");
	    //strcat(command_line, command_arg);
	    //execvp(command_line, parameters, envp);
	  }
	  if( strcmp(command_line, "exit") == 0)
	  {
	    break;
	  }
	}
	return 0;
}
