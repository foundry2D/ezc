#pragma once

#include "cr.h"

#ifdef __cplusplus
extern "C" {
#endif

CR_EXPORT void ezc_init(char* code_path);
CR_EXPORT void ezc_draw(void);
CR_EXPORT void ezc_run(void);
CR_EXPORT void ezc_set_draw_begin(void);
CR_EXPORT void ezc_deinit(void);

CR_EXPORT void ezc_main(struct cr_plugin *ctx, enum cr_op operation);

#ifdef __cplusplus
}
#endif
