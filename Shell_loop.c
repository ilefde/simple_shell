#include "main.h"
/**
 * simple_shell - reads a text file and prints the letters
 * @ac: filename.
 * @av: numbers of letters printed.
 *
 * Return: prompt user to enter command.
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
  int_mode=1;
  while (int_mode)
  {
  int_mode = isatty(STDIN_FILENO);
     if (int_mode == 1)
     {
	     prompt(); /**function that prints prompt */
	     user_input = get.line(); /**function takes in user command */
	     cmd = parser(user_input);
		     
		     
	     
       write(STDOUT_FILENO, “~$ “, 13);
       read(STDIN)
     }
  }
/**int 
     main (int argc, char **argv)
     {
	while (1){
		int childPid;
		char * cmdLine;

	        printPrompt();

	        cmdLine= readCommandLine(); //or GNU readline("");
		
		cmd = parseCommand(cmdLine);

		record command in history list (GNU readline history ?)
 
		if ( isBuiltInCommand(cmd)){
		    executeBuiltInCommand(cmd);
		} else {		
		     childPid = fork();
		     if (childPid == 0){
			executeCommand(cmd); //calls execvp  
			
		     } else {
			if (isBackgroundJob(cmd)){
			        record in list of background jobs
			} else {
				waitpid (childPid);

			}		
		    }
	        }
     }
*/
