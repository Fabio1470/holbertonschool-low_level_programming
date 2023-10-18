#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char lettre;
	for(lettre = 'a';lettre <= 'z';lettre++)
	{
		if(lettre != 'e' && lettre != 'q')
			putchar(lettre);

	}
	putchar('\n');
	return(0);

}
