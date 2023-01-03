//Using 8 threads.
//Approval thread dead. Done!


package april.tag;

/** Tag family with 27 distinct codes.
    bits: 16,  minimum hamming: 5

    Max bits corrected       False positive rate
            0                  0.04119873 %
            1                  0.70037842 %
            2                  5.64422607 %

    Generation time: 1.223000 s

    Hamming distance between pairs of codes (accounting for rotation):

       0  7
       1  67
       2  150
       3  109
       4  18
       5  0
       6  0
       7  0
       8  0
       9  0
      10  0
      11  0
      12  0
      13  0
      14  0
      15  0
      16  0
**/
public class Tag16h5Counting extends TagFamily
{
	private static class ConstructCodes0 {
		private static long[] constructCodes() {
			return new long[] { 0x8bdbL, 0x9765L, 0xa2efL, 0xb43eL, 0xc58dL, 0xdca1L, 0xf3b5L, 0x2d67L, 0x447bL, 0x72a3L, 0x89b7L, 0x9b06L, 0x98e2L, 0xc70aL, 0xc4e6L, 0x91cfL, 0x9ed6L, 0x1ba0L, 0xcc57L, 0xa4caL, 0x896eL, 0x21c3L, 0x7435L, 0x1eafL, 0x8494L, 0x423eL, 0xbfeeL };
		}
	}

	private static long[] constructCodes() {
		long[] codes = new long[27];
		System.arraycopy(ConstructCodes0.constructCodes(), 0, codes, 0, 27);
		return codes;
	}

	public Tag16h5Counting()
	{
		super(ImageLayout.Factory.createFromString("", "wwwwwwwwwbbbbbbwwbddddbwwbddddbwwbddddbwwbddddbwwbbbbbbwwwwwwwww"), 5, constructCodes());
	}
}

