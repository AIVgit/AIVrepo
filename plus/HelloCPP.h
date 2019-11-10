#ifdef __cplusplus
extern "C" {
#endif

typedef void (*callbackFunction)(int b);

int callFunctionX(callbackFunction);

int helloFunction();

#ifdef __cplusplus
}
#endif
