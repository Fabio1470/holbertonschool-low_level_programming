#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char lower;
	char upper;
	for(lower = 'a';lower <= 'z';lower++)
	{
		putchar(lower);
	}
	for(upper = 'A';upper <= 'Z';upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return(0);

}
