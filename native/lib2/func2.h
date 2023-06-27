#ifndef FUNC2_H
#define FUNC2_H

#ifdef _WIN32
#define FUNC2_EXPORT __declspec(dllexport)
#else
#define FUNC2_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

FUNC2_EXPORT void func2_print(const char* msg);

#ifdef __cplusplus
}
#endif

#endif
