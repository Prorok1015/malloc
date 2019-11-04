#include "t_malloc.h"
#include <iostream>
void test() 
{
	int a = t_malloc(sizeof(int));
	std::printf("int a =%i", a);
}

int main(char arg, char** arc)
{
	return 0;
}