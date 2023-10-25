#include"main.h"

void rev_string(char *s)
{
	int count = 0;
	while(*(s + count) != '\0')
	{
		putchar(*(s + count));
		count++;
	}
	while(count >= 0)
	{
		putchar(*(s + count));
		count--;
	}
}
