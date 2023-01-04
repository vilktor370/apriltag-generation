#ifndef _TAG16H1
#define _TAG16H1

#include "apriltag.h"

#ifdef __cplusplus
extern "C" {
#endif

apriltag_family_t *tag16h1_create();
void tag16h1_destroy(apriltag_family_t *tf);

#ifdef __cplusplus
}
#endif

#endif
