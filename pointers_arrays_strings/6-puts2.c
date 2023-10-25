#include"main.h"

void puts2(char *str)
{
	int count = 0;
	while(*(str + count) != '\0')
	{
	       if((count + 2) % 2 == 0)
	       {
	       		putchar(*(str + count));
	       }
		count++;	       
	}
	putchar('\n');
}
