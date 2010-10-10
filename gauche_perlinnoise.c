/*
 * gauche_perlinnoise.c
 */

#include "gauche_perlinnoise.h"

/*
 * The following function is a dummy one; replace it for
 * your C function definitions.
 */

ScmObj test_gauche_perlinnoise(void)
{
    return SCM_MAKE_STR("gauche_perlinnoise is working");
}

/*
 * Module initialization function.
 */
extern void Scm_Init_gauche_perlinnoiselib(ScmModule*);

void Scm_Init_gauche_perlinnoise(void)
{
    ScmModule *mod;

    /* Register this DSO to Gauche */
    SCM_INIT_EXTENSION(gauche_perlinnoise);

    /* Create the module if it doesn't exist yet. */
    mod = SCM_MODULE(SCM_FIND_MODULE("ext.perlinnoise", TRUE));

    /* Register stub-generated procedures */
    Scm_Init_gauche_perlinnoiselib(mod);
}
