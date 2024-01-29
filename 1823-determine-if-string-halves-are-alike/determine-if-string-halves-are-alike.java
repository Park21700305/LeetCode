public class Solution {
    public boolean halvesAreAlike(String s) {
        s = s.toLowerCase();
        int mid = s.length() / 2;
        int count = 0;
        
        for (int i = 0; i < mid; i++) {
            char c1 = s.charAt(i);
            char c2 = s.charAt(mid + i);
            if (isVowel(c1)) count++;
            if (isVowel(c2)) count--;
        }
        
        return count == 0;
    }
    
    private boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
}
