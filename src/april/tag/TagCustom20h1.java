//Using 8 threads.
//  81.0623%  codes: 19    (169661 iters/sec, 0.02 minutes = 0.00 hours)           
// 100.0000%  codes: 19    (39612 iters/sec, 0.00 minutes = 0.00 hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           


// package april.tag;

/** Tag family with 19 distinct codes.
    bits: 20,  minimum hamming: 1

    Max bits corrected       False positive rate
            0                  0.00181198 %

    Generation time: 60.060000 s

    Hamming distance between pairs of codes (accounting for rotation):

       0  0
       1  0
       2  82
       3  69
       4  18
       5  2
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
      17  0
      18  0
      19  0
      20  0
**/
// public class TagCustom20h1 extends TagFamily
// {
// 	private static class ConstructCodes0 {
// 		private static long[] constructCodes() {
// 			return new long[] { 0xd0bd0L, 0xc1195L, 0xa1d1fL, 0x828a9L, 0x72e6eL, 0x539f8L, 0x34582L, 0x056d1L, 0xe625bL, 0xa796fL, 0x884f9L, 0xbcffaL, 0x16bc1L, 0x22461L, 0xa5289L, 0x7223dL, 0x0dc5aL, 0x194faL, 0xfaf08L };
// 		}
// 	}

// 	private static long[] constructCodes() {
// 		long[] codes = new long[19];
// 		System.arraycopy(ConstructCodes0.constructCodes(), 0, codes, 0, 19);
// 		return codes;
// 	}

// 	public TagCustom20h1()
// 	{
// 		super(ImageLayout.Factory.createFromString("Custom", "bbwwbwwwbwwwwwwbwwwbwwddddddwwwwdbbbbdwwbwdbwwbdbwwbdbwwbdwbwwdbbbbdwwwwddddddwwbwwwbwwwwwwbwwwbwwbb"), 1, constructCodes());
// 	}
// }

// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
// 100.0000%  codes: 19    (0 iters/sec, NaN minutes = NaN hours)           
//Approval thread dead. Done!


package april.tag;

/** Tag family with 19 distinct codes.
    bits: 20,  minimum hamming: 1

    Max bits corrected       False positive rate
            0                  0.00181198 %

    Generation time: 75.050000 s

    Hamming distance between pairs of codes (accounting for rotation):

       0  0
       1  0
       2  82
       3  69
       4  18
       5  2
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
      17  0
      18  0
      19  0
      20  0
**/
public class TagCustom20h1 extends TagFamily
{
	private static class ConstructCodes0 {
		private static long[] constructCodes() {
			return new long[] { 0xd0bd0L, 0xc1195L, 0xa1d1fL, 0x828a9L, 0x72e6eL, 0x539f8L, 0x34582L, 0x056d1L, 0xe625bL, 0xa796fL, 0x884f9L, 0xbcffaL, 0x16bc1L, 0x22461L, 0xa5289L, 0x7223dL, 0x0dc5aL, 0x194faL, 0xfaf08L };
		}
	}

	private static long[] constructCodes() {
		long[] codes = new long[19];
		System.arraycopy(ConstructCodes0.constructCodes(), 0, codes, 0, 19);
		return codes;
	}

	public TagCustom20h1()
	{
		super(ImageLayout.Factory.createFromString("Custom", "bbwwbwwwbwwwwwwbwwwbwwddddddwwwwdbbbbdwwbwdbwwbdbwwbdbwwbdwbwwdbbbbdwwwwddddddwwbwwwbwwwwwwbwwwbwwbb"), 1, constructCodes());
	}
}

