//Using 8 threads.
//Approval thread dead. Done!


package april.tag;

/** Tag family with 8 distinct codes.
    bits: 16,  minimum hamming: 1

    Max bits corrected       False positive rate
            0                  0.01220703 %

    Generation time: 1.748000 s

    Hamming distance between pairs of codes (accounting for rotation):

       0  0
       1  0
       2  22
       3  5
       4  0
       5  1
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
public class Tag16h1Counting extends TagFamily
{
	private static class ConstructCodes0 {
		private static long[] constructCodes() {
			return new long[] { 0x3bbaL, 0x4744L, 0x52ceL, 0x5893L, 0xbaa8L, 0x9021L, 0x96bcL, 0xf574L };
		}
	}

	private static long[] constructCodes() {
		long[] codes = new long[8];
		System.arraycopy(ConstructCodes0.constructCodes(), 0, codes, 0, 8);
		return codes;
	}

	public Tag16h1Counting()
	{
		super(ImageLayout.Factory.createFromString("", "wwwwwwwwwbbbbbbwwbddddbwwbddddbwwbddddbwwbddddbwwbbbbbbwwwwwwwww"), 1, constructCodes());
	}
}

