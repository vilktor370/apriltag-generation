#include <stdlib.h>
#include "tagCustom16h5.h"

static uint64_t codedata[29] = {
   0x00000000000091a0UL,
   0x0000000000009765UL,
   0x0000000000009d2aUL,
   0x000000000000a2efUL,
   0x000000000000b43eUL,
   0x000000000000d117UL,
   0x000000000000108eUL,
   0x0000000000002d67UL,
   0x000000000000447bUL,
   0x00000000000055caUL,
   0x0000000000005b8fUL,
   0x00000000000089b7UL,
   0x0000000000009b06UL,
   0x0000000000005d0cUL,
   0x0000000000007420UL,
   0x0000000000009c83UL,
   0x0000000000008421UL,
   0x000000000000aa60UL,
   0x000000000000aed7UL,
   0x000000000000c768UL,
   0x000000000000c49dUL,
   0x000000000000af35UL,
   0x000000000000214bUL,
   0x0000000000002a4eUL,
   0x000000000000afecUL,
   0x0000000000000db9UL,
   0x000000000000c54fUL,
   0x000000000000166eUL,
   0x0000000000008332UL,
};
apriltag_family_t *tagCustom16h5_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagCustom16h5");
   tf->h = 5;
   tf->ncodes = 29;
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

void tagCustom16h5_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
