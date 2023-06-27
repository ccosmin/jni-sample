#include "sample_SayHello.h"

#include <stdio.h>

JNIEXPORT void JNICALL Java_sample_SayHello_sayHello
  (JNIEnv *, jobject)
{
  fprintf(stdout, "from lib1\n");
}
