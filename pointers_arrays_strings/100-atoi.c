#include"main.h"

int _atoi(char *s)
{
	int i = 0;
	while(s[i])
	{
		
		if((s[i] <= "57") && (s[i] >= "48"))
		{
			putchar(s[i]);
		}
		if(s[i] == "45" || s[i] == "43")
		{
			putchar(s[i]);
			break;
		}
		i--;
	}
}
