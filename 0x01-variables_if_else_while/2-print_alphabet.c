#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - 2-print_alphabet.c
*
* Return:(0)
*
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
