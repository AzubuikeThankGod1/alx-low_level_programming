#include "main.h"

/**
 * _strlen - length of a string
 * 0s: A pointer to an int that will be changed/updated
 *
 * return: void that means our answer is correct
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
