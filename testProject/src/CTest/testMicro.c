#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int n;
#define number n
#define set() {number = 100;}
#define get() (number)

void testMicro(){
	puts("testMicro!\n");

	set();
	printf("n is %d\n", get());

	puts("\n");
}
