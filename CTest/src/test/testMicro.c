#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int n;
#define number n
#define set() {number = 100;}
#define get() (number)

int g_error_code;
#define Run(fun)                \
	    {                       \
	        g_error_code = fun; \
	        if(g_error_code)    \
	        {                   \
	           printf("return %d", g_error_code); \
	        }                   \
	    }

void testMicro()
{
	puts("testMicro!");

	set();

	printf("n is %d\n", get());

	Run(printf("%s", "hello world\n"));
}
