#include <stdio.h>

extern void test(void) __attribute__((__error__("error_attr.c compile break")));

int main()
{
#ifdef ATTR
	test();
#endif
	printf("this is error_attr.c\n");
	return 0;
}

