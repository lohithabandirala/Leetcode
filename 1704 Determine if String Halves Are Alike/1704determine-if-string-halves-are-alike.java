class Solution {
    public boolean halvesAreAlike(String s) {
        int n = s.length();
        int start = 0, sCount = 0;
        int end = n - 1, eCount = 0;

        while (start <= end) {
            if (isVowel(s.charAt(start))) {
                sCount++;
            }

            if (isVowel(s.charAt(end))) {
                eCount++;
            }

            start++;
            end--;
        }

        return sCount == eCount;
    }

    private boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
}
