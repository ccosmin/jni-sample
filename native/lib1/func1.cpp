#include "sample_SayHello.h"

#include "../lib2/func2.h"

#include <stdio.h>

JNIEXPORT void JNICALL Java_sample_SayHello_sayHello
  (JNIEnv *, jobject)
{
  fprintf(stdout, "from lib1\n");
  func2_print("calling lib2");
}
