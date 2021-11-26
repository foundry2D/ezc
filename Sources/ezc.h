#pragma once


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

typedef enum { LOG_LEVEL_INFO, LOG_LEVEL_WARNING, LOG_LEVEL_ERROR } log_level_t;
typedef void (*WindowBegin)(char* /*label*/,int /*x*/,int /*y*/, int /*w*/, int /*h*/);
typedef void (*WindowEnd)(void);
typedef void (*Log)(log_level_t/*log_level*/, char* /*format*/,...);

typedef struct ezc_data_t {
	char* code_path;
	WindowBegin window_begin;
	WindowEnd window_end;
	Log log;
}ezc_data;

EZC_EXPORT void ezc_init(char* code_path);
EZC_EXPORT void ezc_run(void);
EZC_EXPORT void ezc_deinit(void);

EZC_EXPORT int ezc_main(struct cr_plugin *ctx, enum cr_op operation);


