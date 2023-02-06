//Using 8 threads.  


package april.tag;

/** Tag family with 15 distinct codes.
    bits: 25,  minimum hamming: 3

    Max bits corrected       False positive rate
            0                  0.00004470 %
            1                  0.00116229 %

    Generation time: 60.055000 s

    Hamming distance between pairs of codes (accounting for rotation):

       0  0
       1  0
       2  0
       3  0
       4  79
       5  23
       6  3
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
      17  0
      18  0
      19  0
      20  0
      21  0
      22  0
      23  0
      24  0
      25  0
**/
public class Tag25h3Counting extends TagFamily
{
	private static class ConstructCodes0 {
		private static long[] constructCodes() {
			return new long[] { 0x889b7dL, 0x1a6a707L, 0x35acccL, 0x153b856L, 0x5aec43L, 0x12c0133L, 0x1886866L, 0xa9f45bL, 0x1c690f8L, 0x8b4f8cL, 0x97857fL, 0x165f924L, 0x191e9aL, 0x1ff85a1L, 0x14892e7L };
		}
	}

	private static long[] constructCodes() {
		long[] codes = new long[15];
		System.arraycopy(ConstructCodes0.constructCodes(), 0, codes, 0, 15);
		return codes;
	}

	public Tag25h3Counting()
	{
		super(ImageLayout.Factory.createFromString("", "wwwwwwwwwwbbbbbbbwwbdddddbwwbdddddbwwbdddddbwwbdddddbwwbdddddbwwbbbbbbbwwwwwwwwww"), 3, constructCodes());
	}
}
   
