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
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include "simple_shell.h"
#define buffer_size 1024
#define path_size 20
#define arg_size 100

int main(int argc, char* argv[])
{	
	//path will be copied over to full_path of bin file dir.
	char* path = "/bin/";
	//we will store the full path in this char array
	char full_path[path_size];
	//list of parameters 
	char* args[arg_size];
	//whole command line that the user inputs
	char command[buffer_size];
	//this will be the status returned after the child returns
	int status;

	//char* parameters[buffer_size/strlen(token)];
	

	//endless loop until the user wants to exit
	while(1)
	{
	  read_command(command, args);
	  int forkReturnValue = fork();
	  //if fork fails it will return less than 0
	  if( forkReturnValue < 0)
	  {
	    printf("Fork failed\n");
	  }
	  //parent
	  else if(forkReturnValue !=0)
	  {
	    //saves the wait return status
	    status = wait( NULL);  
	  }
	  //child
	  else
	  {
	    printf("Child %d and with status %d\n", (int) getpid(), status);
	    //copies over path string into full_path array
	    strcpy(full_path, path);
	    //concatenates args[0] which is first command
	    strcat(full_path, args[0]);
	    //will execute the full_path and looks for params in args
	    execvp(full_path, args);
	  }
	  //this line will exit if the user types in exit
	  if( strcmp(command, "exit") == 0)
	  {
	     exit(0);
	  }
	}
	return 0;
}
