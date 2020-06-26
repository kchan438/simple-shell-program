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
	int pid = 0;
	//char* command_arg[buffer_size];
	//char* command_line[buffer_size];

	//token delimiter for the command line arguments
	//const char space[] = " ";
	
	//might need to print out token, each token will
	//be each string separated by the delimiter
	//will need a while loop to print or read if needed
	//char* token;
	char *envp[] = { (char *) "PATH=/bin", 0 };
	//using a while loop to loop forever until the user
	//wants to exit
	while(1)
	{
	  //will take in user input
	  //readCommand(command, parameters);

	  int pid = fork();
	  if(pid !=0)	//parent
	  {
	    wait(NULL);
	  }
	  else
	  {
	    //strcpy(command_line, "/bin");
	    //strcat(command_line, command_arg);
	    //execvp(command_line, parameters, envp);
	  }
	  //this line will exit if the user types in exit
	  //if( strcmp(command_line, "exit") == 0)
	  //{
	  //  break;
	  //}
	}
	return 0;
}
