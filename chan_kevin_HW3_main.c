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
#define buffer_size 1024	//command line should not be more than 1024
#define path_size 100
int main(int argc, char* argv[])
{	
	//this will be the PATH environment variable for when we
	//use execvp()
	char* env_var[] = { (char *) "PATH=/bin", 0 };
	//whole command line that the user inputs
	char* command_line[buffer_size];
	//string will be saved in here after we get the first, 		which is the command
	char* token;
	//we'll need this to get the PID of parent and child???
	int pid = 0;
	//get user input and save it into command_line
	fgets(command_line, buffer_size, stdin);
	printf("\n");

	char* parameters[buffer_size/strlen(token)];
	int i = 0;
	while(token != NULL)
	{
	  argv[i] = token;
	  token = strtok(NULL, " ");
	  i++;
	}
	argv[i] = NULL;



	//endless loop until the user wants to exit
	while(1)
	{
	  //will take in user input
	  //readCommand(command, parameters);

	  int pid = fork();
	  if(pid !=0)	//parent
	  {
	    wait(NULL);
	  }
	  else	//child
	  {
	    //strcpy(path, "/bin/");
	    //strcat(path, command);
	    //execvp(path, parameters, env_var);
	  }
	  //this line will exit if the user types in exit
	  /*if( strcmp(command_line, "exit") == 0)
	  //{
	  //  break;
	  }*/
	}
	return 0;
}
