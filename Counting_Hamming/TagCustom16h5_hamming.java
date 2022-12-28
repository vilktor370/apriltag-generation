//Using 8 threads.
//Approval thread dead. Done!


package april.tag;

/** Tag family with 29 distinct codes.
    bits: 16,  minimum hamming: 5

    Max bits corrected       False positive rate
            0                  0.04425049 %
            1                  0.75225830 %
            2                  6.06231689 %

    Generation time: 0.218000 s

    Hamming distance between pairs of codes (accounting for rotation):

       0  0
       1  0
       2  0
       3  0
       4  0
       5  114
       6  150
       7  88
       8  44
       9  8
      10  2
      11  0
      12  0
      13  0
      14  0
      15  0
      16  0
**/
public class TagCustom16h5_hamming extends TagFamily
{
	private static class ConstructCodes0 {
		private static long[] constructCodes() {
			return new long[] { 0x91a0L, 0x9765L, 0x9d2aL, 0xa2efL, 0xb43eL, 0xd117L, 0x108eL, 0x2d67L, 0x447bL, 0x55caL, 0x5b8fL, 0x89b7L, 0x9b06L, 0x5d0cL, 0x7420L, 0x9c83L, 0x8421L, 0xaa60L, 0xaed7L, 0xc768L, 0xc49dL, 0xaf35L, 0x214bL, 0x2a4eL, 0xafecL, 0x0db9L, 0xc54fL, 0x166eL, 0x8332L };
		}
	}

	private static long[] constructCodes() {
		long[] codes = new long[29];
		System.arraycopy(ConstructCodes0.constructCodes(), 0, codes, 0, 29);
		return codes;
	}

	public TagCustom16h5_hamming()
	{
		super(ImageLayout.Factory.createFromString("Custom", "ddddddwwwddwbwddwwwdddddd"), 5, constructCodes());
	}
}

