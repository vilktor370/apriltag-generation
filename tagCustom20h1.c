#include <stdlib.h>
#include "tagCustom20h1.h"

static uint64_t codedata[19] = {
   0x00000000000d0bd0UL,
   0x00000000000c1195UL,
   0x00000000000a1d1fUL,
   0x00000000000828a9UL,
   0x0000000000072e6eUL,
   0x00000000000539f8UL,
   0x0000000000034582UL,
   0x00000000000056d1UL,
   0x00000000000e625bUL,
   0x00000000000a796fUL,
   0x00000000000884f9UL,
   0x00000000000bcffaUL,
   0x0000000000016bc1UL,
   0x0000000000022461UL,
   0x00000000000a5289UL,
   0x000000000007223dUL,
   0x000000000000dc5aUL,
   0x00000000000194faUL,
   0x00000000000faf08UL,
};
apriltag_family_t *tagCustom20h1_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagCustom20h1");
   tf->h = 1;
   tf->ncodes = 19;
   tf->codes = codedata;
   tf->nbits = 20;
   tf->bit_x = calloc(20, sizeof(uint32_t));
   tf->bit_y = calloc(20, sizeof(uint32_t));
   tf->bit_x[0] = 2;
   tf->bit_y[0] = 2;
   tf->bit_x[1] = 3;
   tf->bit_y[1] = 2;
   tf->bit_x[2] = 4;
   tf->bit_y[2] = 2;
   tf->bit_x[3] = 5;
   tf->bit_y[3] = 2;
   tf->bit_x[4] = 6;
   tf->bit_y[4] = 2;
   tf->bit_x[5] = 7;
   tf->bit_y[5] = 2;
   tf->bit_x[6] = 7;
   tf->bit_y[6] = 3;
   tf->bit_x[7] = 7;
   tf->bit_y[7] = 4;
   tf->bit_x[8] = 7;
   tf->bit_y[8] = 5;
   tf->bit_x[9] = 7;
   tf->bit_y[9] = 6;
   tf->bit_x[10] = 7;
   tf->bit_y[10] = 7;
   tf->bit_x[11] = 6;
   tf->bit_y[11] = 7;
   tf->bit_x[12] = 5;
   tf->bit_y[12] = 7;
   tf->bit_x[13] = 4;
   tf->bit_y[13] = 7;
   tf->bit_x[14] = 3;
   tf->bit_y[14] = 7;
   tf->bit_x[15] = 2;
   tf->bit_y[15] = 7;
   tf->bit_x[16] = 2;
   tf->bit_y[16] = 6;
   tf->bit_x[17] = 2;
   tf->bit_y[17] = 5;
   tf->bit_x[18] = 2;
   tf->bit_y[18] = 4;
   tf->bit_x[19] = 2;
   tf->bit_y[19] = 3;
   tf->width_at_border = 0;
   tf->total_width = 10;
   tf->reversed_border = false;
   return tf;
}

void tagCustom20h1_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
