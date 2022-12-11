#include <stdlib.h>
#include "tagCustom16h8.h"

static uint64_t codedata[3] = {
   0x0000000000004acdUL,
   0x000000000000260bUL,
   0x000000000000d217UL,
};
apriltag_family_t *tagCustom16h8_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagCustom16h8");
   tf->h = 8;
   tf->ncodes = 3;
   tf->codes = codedata;
   tf->nbits = 16;
   tf->bit_x = calloc(16, sizeof(uint32_t));
   tf->bit_y = calloc(16, sizeof(uint32_t));
   tf->bit_x[0] = -2;
   tf->bit_y[0] = -2;
   tf->bit_x[1] = -1;
   tf->bit_y[1] = -2;
   tf->bit_x[2] = 0;
   tf->bit_y[2] = -2;
   tf->bit_x[3] = 1;
   tf->bit_y[3] = -2;
   tf->bit_x[4] = 2;
   tf->bit_y[4] = -2;
   tf->bit_x[5] = 2;
   tf->bit_y[5] = -1;
   tf->bit_x[6] = 2;
   tf->bit_y[6] = 0;
   tf->bit_x[7] = 2;
   tf->bit_y[7] = 1;
   tf->bit_x[8] = 2;
   tf->bit_y[8] = 2;
   tf->bit_x[9] = 1;
   tf->bit_y[9] = 2;
   tf->bit_x[10] = 0;
   tf->bit_y[10] = 2;
   tf->bit_x[11] = -1;
   tf->bit_y[11] = 2;
   tf->bit_x[12] = -2;
   tf->bit_y[12] = 2;
   tf->bit_x[13] = -2;
   tf->bit_y[13] = 1;
   tf->bit_x[14] = -2;
   tf->bit_y[14] = 0;
   tf->bit_x[15] = -2;
   tf->bit_y[15] = -1;
   tf->width_at_border = 1;
   tf->total_width = 5;
   tf->reversed_border = false;
   return tf;
}

void tagCustom16h8_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
