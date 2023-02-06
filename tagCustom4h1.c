#include <stdlib.h>
#include "tagCustom4h1.h"

static uint64_t codedata[0] = {
};
apriltag_family_t *tagCustom4h1_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagCustom4h1");
   tf->h = 1;
   tf->ncodes = 0;
   tf->codes = codedata;
   tf->nbits = 4;
   tf->bit_x = calloc(4, sizeof(uint32_t));
   tf->bit_y = calloc(4, sizeof(uint32_t));
   tf->bit_x[0] = 4;
   tf->bit_y[0] = 4;
   tf->bit_x[1] = 5;
   tf->bit_y[1] = 4;
   tf->bit_x[2] = 5;
   tf->bit_y[2] = 5;
   tf->bit_x[3] = 4;
   tf->bit_y[3] = 5;
   tf->width_at_border = 0;
   tf->total_width = 10;
   tf->reversed_border = false;
   return tf;
}

void tagCustom4h1_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
