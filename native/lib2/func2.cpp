#include "func2.h"

#include <stdio.h>

void func2_print(const char* msg)
{
  fprintf(stdout, "from lib2: %s\n", msg);
}
