#include <stdio.h>

extern void test(void);

int main()
{
#ifdef ATTR
	test();
#endif
	printf("this is no_attr.c\n");
	return 0;
}

