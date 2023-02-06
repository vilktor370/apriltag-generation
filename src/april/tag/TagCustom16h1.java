//Using 8 threads.
//Approval thread dead. Done!


package april.tag;

/** Tag family with 0 distinct codes.
    bits: 4,  minimum hamming: 1

    Max bits corrected       False positive rate
            0                  0.00000000 %

    Generation time: 0.043000 s

    Hamming distance between pairs of codes (accounting for rotation):

       0  0
       1  0
       2  0
       3  0
       4  0
**/
public class TagCustom16h1 extends TagFamily
{
	private static long[] constructCodes() {
		long[] codes = new long[0];
		return codes;
	}

	public TagCustom16h1()
	{
		super(ImageLayout.Factory.createFromString("Custom", "bbwwbwwwbwwwwwwbwwwbwwwwwwwwwwwwwbbbbwwwbwwbddbwbwwbwbddbwwbwwwbbbbwwwwwwwwwwwwwbwwwbwwwwwwbwwwbwwbb"), 1, constructCodes());
	}
}

