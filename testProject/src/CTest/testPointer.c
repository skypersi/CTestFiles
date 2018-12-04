#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t var;

void testPointer(void *data)
{
  *((uint8_t *)data) = 0xFF;
}

