#include <stdlib.h>
#include "tag25h3.h"

static uint64_t codedata[15] = {
   0x0000000000889b7dUL,
   0x0000000001a6a707UL,
   0x000000000035acccUL,
   0x000000000153b856UL,
   0x00000000005aec43UL,
   0x00000000012c0133UL,
   0x0000000001886866UL,
   0x0000000000a9f45bUL,
   0x0000000001c690f8UL,
   0x00000000008b4f8cUL,
   0x000000000097857fUL,
   0x000000000165f924UL,
   0x0000000000191e9aUL,
   0x0000000001ff85a1UL,
   0x00000000014892e7UL,
};
apriltag_family_t *tag25h3_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tag25h3");
   tf->h = 3;
   tf->ncodes = 15;
   tf->codes = codedata;
   tf->nbits = 25;
   tf->bit_x = calloc(25, sizeof(uint32_t));
   tf->bit_y = calloc(25, sizeof(uint32_t));
   tf->bit_x[0] = 1;
   tf->bit_y[0] = 1;
   tf->bit_x[1] = 2;
   tf->bit_y[1] = 1;
   tf->bit_x[2] = 3;
   tf->bit_y[2] = 1;
   tf->bit_x[3] = 4;
   tf->bit_y[3] = 1;
   tf->bit_x[4] = 2;
   tf->bit_y[4] = 2;
   tf->bit_x[5] = 3;
   tf->bit_y[5] = 2;
   tf->bit_x[6] = 5;
   tf->bit_y[6] = 1;
   tf->bit_x[7] = 5;
   tf->bit_y[7] = 2;
   tf->bit_x[8] = 5;
   tf->bit_y[8] = 3;
   tf->bit_x[9] = 5;
   tf->bit_y[9] = 4;
   tf->bit_x[10] = 4;
   tf->bit_y[10] = 2;
   tf->bit_x[11] = 4;
   tf->bit_y[11] = 3;
   tf->bit_x[12] = 5;
   tf->bit_y[12] = 5;
   tf->bit_x[13] = 4;
   tf->bit_y[13] = 5;
   tf->bit_x[14] = 3;
   tf->bit_y[14] = 5;
   tf->bit_x[15] = 2;
   tf->bit_y[15] = 5;
   tf->bit_x[16] = 4;
   tf->bit_y[16] = 4;
   tf->bit_x[17] = 3;
   tf->bit_y[17] = 4;
   tf->bit_x[18] = 1;
   tf->bit_y[18] = 5;
   tf->bit_x[19] = 1;
   tf->bit_y[19] = 4;
   tf->bit_x[20] = 1;
   tf->bit_y[20] = 3;
   tf->bit_x[21] = 1;
   tf->bit_y[21] = 2;
   tf->bit_x[22] = 2;
   tf->bit_y[22] = 4;
   tf->bit_x[23] = 2;
   tf->bit_y[23] = 3;
   tf->bit_x[24] = 3;
   tf->bit_y[24] = 3;
   tf->width_at_border = 7;
   tf->total_width = 9;
   tf->reversed_border = false;
   return tf;
}

void tag25h3_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
