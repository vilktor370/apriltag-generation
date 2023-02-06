#include <stdlib.h>
#include "tagCustom16h1.h"

static uint64_t codedata[7] = {
   0x0000000000004d09UL,
   0x00000000000069e2UL,
   0x00000000000086bbUL,
   0x000000000000f45aUL,
   0x000000000000544bUL,
   0x00000000000076e9UL,
   0x000000000000f411UL,
};
apriltag_family_t *tagCustom16h1_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagCustom16h1");
   tf->h = 1;
   tf->ncodes = 7;
   tf->codes = codedata;
   tf->nbits = 16;
   tf->bit_x = calloc(16, sizeof(uint32_t));
   tf->bit_y = calloc(16, sizeof(uint32_t));
   tf->bit_x[0] = 0;
   tf->bit_y[0] = 0;
   tf->bit_x[1] = 1;
   tf->bit_y[1] = 0;
   tf->bit_x[2] = 8;
   tf->bit_y[2] = 0;
   tf->bit_x[3] = 1;
   tf->bit_y[3] = 1;
   tf->bit_x[4] = 9;
   tf->bit_y[4] = 0;
   tf->bit_x[5] = 9;
   tf->bit_y[5] = 1;
   tf->bit_x[6] = 9;
   tf->bit_y[6] = 8;
   tf->bit_x[7] = 8;
   tf->bit_y[7] = 1;
   tf->bit_x[8] = 9;
   tf->bit_y[8] = 9;
   tf->bit_x[9] = 8;
   tf->bit_y[9] = 9;
   tf->bit_x[10] = 1;
   tf->bit_y[10] = 9;
   tf->bit_x[11] = 8;
   tf->bit_y[11] = 8;
   tf->bit_x[12] = 0;
   tf->bit_y[12] = 9;
   tf->bit_x[13] = 0;
   tf->bit_y[13] = 8;
   tf->bit_x[14] = 0;
   tf->bit_y[14] = 1;
   tf->bit_x[15] = 1;
   tf->bit_y[15] = 8;
   tf->width_at_border = 0;
   tf->total_width = 10;
   tf->reversed_border = false;
   return tf;
}

void tagCustom16h1_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
