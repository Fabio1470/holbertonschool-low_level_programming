#include"main.h"

void _puts(char *str)
{
	int count = 0;
	while(*(str + count) != '\0')
	{
		putchar(*(str + count));
		count++;

	}
	putchar('\n');
}

