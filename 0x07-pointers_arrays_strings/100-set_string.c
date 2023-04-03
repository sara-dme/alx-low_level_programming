#include "main.h"

/**
 * set_string - that sets the value of a pointer to a char.
 * @s: pointer to pointer to set
 * @to: the char to point to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
