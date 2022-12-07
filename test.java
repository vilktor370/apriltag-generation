import java.lang.Math;
public class test {
    public static void main(String[] args) throws Exception {

        long[] arr = new long[] {0x2640L, 0x2c05L, 0x31caL, 0x3d54L};
        System.out.printf("The length is %d\n", arr.length);
        for(int i =0;i<arr.length;i++){
            System.out.println(Long.toBinaryString(arr[i]));
        }
       
    }
}