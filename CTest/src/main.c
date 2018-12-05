#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

extern void testBitField();
extern void testMicro();
extern void testPointer(void *data);

int main()
{
  puts("main!");

#if(0)
  testBitField();
#endif

#if(1)
  testMicro();
#endif

#if(1)
  uint16_t data;
  testPointer(&data);
#endif

  return EXIT_SUCCESS;
}
