#include<unistd.h>
char _putchar(char c[50])
{
	return (write(1, &c, 50));
}
