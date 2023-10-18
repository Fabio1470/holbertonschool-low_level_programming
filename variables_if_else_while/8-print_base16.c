#include<stdlib.h> 
#include<stdio.h>
#include<time.h>

int main()
{
	char n;
	char l;
	for(n = '0';n <= '9';n++)
	{
		putchar(n);
	}
	for(l = 'a';l <= 'f';l++)
	{
		putchar(l);
	}
	putchar('\n');
	return(0);

}
