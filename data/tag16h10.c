#include <stdlib.h>
#include "tag16h10.h"

static uint64_t codedata[30] = {
   0x00000000000027c8UL,
   0x00000000000031b6UL,
   0x0000000000003859UL,
   0x000000000000569cUL,
   0x0000000000006c76UL,
   0x0000000000007ddbUL,
   0x000000000000af09UL,
   0x000000000000f5a1UL,
   0x000000000000fb8bUL,
   0x0000000000001cb9UL,
   0x00000000000028caUL,
   0x000000000000e8dcUL,
   0x0000000000001426UL,
   0x0000000000005770UL,
   0x0000000000009253UL,
   0x000000000000b702UL,
   0x000000000000063aUL,
   0x0000000000008f34UL,
   0x000000000000b4c0UL,
   0x00000000000051ecUL,
   0x000000000000e6f0UL,
   0x0000000000005fa4UL,
   0x000000000000dd43UL,
   0x0000000000001aaaUL,
   0x000000000000e62fUL,
   0x0000000000006dbcUL,
   0x000000000000b6ebUL,
   0x000000000000de10UL,
   0x000000000000154dUL,
   0x000000000000b57aUL,
};
apriltag_family_t *tag16h10_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tag16h10");
   tf->h = 10;
   tf->ncodes = 30;
   tf->codes = codedata;
   tf->nbits = 16;
   tf->bit_x = calloc(16, sizeof(uint32_t));
   tf->bit_y = calloc(16, sizeof(uint32_t));
   tf->bit_x[0] = 1;
   tf->bit_y[0] = 1;
   tf->bit_x[1] = 2;
   tf->bit_y[1] = 1;
   tf->bit_x[2] = 3;
   tf->bit_y[2] = 1;
   tf->bit_x[3] = 2;
   tf->bit_y[3] = 2;
   tf->bit_x[4] = 4;
   tf->bit_y[4] = 1;
   tf->bit_x[5] = 4;
   tf->bit_y[5] = 2;
   tf->bit_x[6] = 4;
   tf->bit_y[6] = 3;
   tf->bit_x[7] = 3;
   tf->bit_y[7] = 2;
   tf->bit_x[8] = 4;
   tf->bit_y[8] = 4;
   tf->bit_x[9] = 3;
   tf->bit_y[9] = 4;
   tf->bit_x[10] = 2;
   tf->bit_y[10] = 4;
   tf->bit_x[11] = 3;
   tf->bit_y[11] = 3;
   tf->bit_x[12] = 1;
   tf->bit_y[12] = 4;
   tf->bit_x[13] = 1;
   tf->bit_y[13] = 3;
   tf->bit_x[14] = 1;
   tf->bit_y[14] = 2;
   tf->bit_x[15] = 2;
   tf->bit_y[15] = 3;
   tf->width_at_border = 6;
   tf->total_width = 8;
   tf->reversed_border = false;
   return tf;
}

void tag16h10_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
