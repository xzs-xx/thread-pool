#include "thread_pool.h"

int i = 0;
void print()
{
	printf("%d\n", i++);
}

int main(int argc,char ** argv)
{
	thread_pool p;
	for (int i = 0; i < 100000; i++)
	{
		p.submit(print);
	}
	return 0;
}