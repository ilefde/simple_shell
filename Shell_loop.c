#include "main.h"
/**
 * simple_shell - reads a text file and prints the letters
 * @ac: filename.
 * @av: numbers of letters printed.
 *
 * Return: prompt user to enter command.
 */
int *void simple_shell(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
  while (int_mode)
  {
  int_mode = isatty(STDIN_FILENO);
     if (int_mode == 1)
     {
       write(STDOUT_FILENO, “~$ “, 13);
     }
  }
