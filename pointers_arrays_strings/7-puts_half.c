#include"main.h"

void puts_half(char *str)
{
	int count = 0;
	while(*(str + count) != '\0')
	{
		count++;
	}	
	if((count % 2) == 1 )
	{
		count += 1;
	}
	count = count / 2;
	while(*(str + count) != '\0')
	{
		putchar(*(str + count));
		count++;
	}

	putchar('\n');
}
