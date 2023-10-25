#include"main.h"

void swap_int(int *a, int *b)

{
	int a_tmp = *a;
	*a = *b;
	*b = a_tmp;
}
