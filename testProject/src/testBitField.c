
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define TESTCASE 4

struct bitField
{
	uint8_t a:1;
	uint8_t b:2;
};

#if(TESTCASE == 3)
	//test----3 How to write bitField to memory
	struct bitField data={0,3}; //{1,3} {2,3} {-1,3};
#else
	struct bitField data={1,3};
#endif

void testBitField(void)
{
	puts("testBitField!");
#if(TESTCASE == 1) || (TESTCASE == 3)
	//test----1 how to read bitField from memory
	printf("data.a is %X\n", (data.a));
	printf("~data.a is %X\n", ~(data.a));
	printf("data.b is %X\n", (data.b));
	printf("~data.b is %X\n", ~(data.b));

#elif(TESTCASE == 2)
	//test----2 see length of bitField(after read)
	printf("sizeof data is %X\n", sizeof(data));
	//printf("sizeof data is %X\n", sizeof(data.a)); //compile fail, can not preProduce sizeof(bitField)
	printf("~data.a is %X\n", ~(data.a));

#elif(TESTCASE == 4)
	//test----4 !bitField
	printf("!data.a is %X\n", ( data.a));
	printf("!data.a is %X\n", (!data.a));
	printf("!data.b is %X\n", ( data.b));
	printf("!data.b is %X\n", (!data.b));

#elif(TESTCASE == 5)
	//test----5 test !0 !1 !2 !-1 !-128
	printf("!0 is %X\n", (!0));
	printf("!1 is %X\n", (!1));
	printf("!2 is %X\n", (!2));
	printf("!-1 is %X\n", (!-1));
	printf("!-128 is %X\n", (!-128));

#else
	#error "TESTCASE configure error"
#endif

	puts("\n");
}
