class Solution {
    public int numJewelsInStones(String jewels, String stones) {
       int count = 0;

        for (int i = 0; i < stones.length(); i++) {
            char stone = stones.charAt(i);
            if (jewels.indexOf(stone) != -1) {
                count++;
            }
        }

        return count;
     
    }
}