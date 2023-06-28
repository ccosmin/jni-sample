#include "exp.h"

#include <windows.h>

#include <string>

std::wstring utf8_decode(const std::string &str)
{
	int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
	std::wstring wstrTo(size_needed, 0);
	MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
	return wstrTo;
}

jboolean JNICALL Java_sample_SayHello_addToPath
  (JNIEnv *env, jobject, jstring str)
{
  jboolean isCopy;
  const char *val = env->GetStringUTFChars(str, &isCopy);

  fprintf(stdout, "Will add %s to path\n", val);

  std::wstring dirwide = utf8_decode(val);

  env->ReleaseStringUTFChars(str, val);

  const DLL_DIRECTORY_COOKIE ret = ::AddDllDirectory(dirwide.c_str());

  fprintf(stdout, "Return from add dll: %p\n", ret);

  return !!ret;
}
