public class Solution {
    // you need to treat n as an unsigned value
    int c=0;
    public int hammingWeight(int n) {
      String binaryStr = Integer.toBinaryString(n);

    
        for (char bit : binaryStr.toCharArray()) {
            if (bit == '1') {
                c++;
            }
        }
        return c;
    }
}