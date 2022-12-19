#include"main.h"
#include <stdio.h>

void puts2(char *s)
{
	int index;

	/*finds the length of string without null character*/
	for (index = 0; s[index] != '\0'; ++index)
	{
		if (index % 2 == 1)
			continue;
		putchar(s[index]);
	}
	putchar('\n');
}
