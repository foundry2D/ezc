



#ifdef _WIN32
#if defined(KINC_DYNAMIC)
#define EZC_EXPORT __declspec(dllimport)
#elif defined(KINC_DYNAMIC_COMPILE)
#define EZC_EXPORT __declspec(dllexport)
#else
#define EZC_EXPORT
#endif
#else
#define EZC_EXPORT
#endif
