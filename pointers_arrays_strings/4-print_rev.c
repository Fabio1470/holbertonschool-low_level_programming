#include"main.h"

void print_rev(char *s)
{
	int count = 0;
	while(*(s + count) != '\0')
	{	
		count++;
	}
	while(count >= 0)
	{
		putchar(*(s + count));
		count--;
	}
	putchar('\n');
}
