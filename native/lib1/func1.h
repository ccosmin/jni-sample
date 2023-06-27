#ifndef FUNC1_H
#define FUNC1_H

#ifdef _WIN32
#define FUNC1_EXPORT __declspec(dllexport)
#else
#define FUNC1_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

FUNC1_EXPORT void func1_print(const char* msg);

#ifdef __cplusplus
}
#endif

#endif
