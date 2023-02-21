#include <unistd.h>

/**
 *_putchar -writes c to stdout
 *print c 
 *Return: 1 (Success)
 *Return: -1 (Error)
 */

int _putchar(char c)

{

return(write(1 ,&c, 1));

}
