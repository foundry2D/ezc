
#include "ezc.h"
#include "cr.h"
#include "generated.h"

#include <stdio.h>

void ezc_init(char* code_path)
{
}


void ezc_deinit(void)
{

}

int ezc_main(struct cr_plugin* ctx, enum cr_op operation) {

    ezc_data g_data = *(ezc_data*)ctx->userdata;
    unsigned int g_version = ctx->version;
    enum cr_failure g_failure = ctx->failure;

    switch (operation) {
    case CR_LOAD:
        if (g_data.code_path != NULL) {
            ezc_init(g_data.code_path);
        }
        return 0;
    case CR_UNLOAD:
        // if needed, save stuff to pass over to next instance
        return 0;
    case CR_CLOSE:
        ezc_deinit();
        return 0;
    case CR_STEP:
        g_data.window_begin("Hello", 0, 0, 100, 100);
        g_data.window_end();
        return 0;
    }
	return 0;
}
