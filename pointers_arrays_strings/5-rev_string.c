#include"main.h"

void rev_string(char *s)
{
	int i;
	int lenght = 0;
	char tmp;
	while(s[lenght])
	{
		lenght++;
	}
	for(lenght--,i = 0;i < lenght / 2;lenght--,i++)
	{
		tmp = s[lenght];
		s[lenght] = s[i];
		s[i] = tmp;
	}
}
