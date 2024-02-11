class Solution {
    public boolean checkRecord(String s) {
        int absents = 0, lates = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A') {
                if (++absents > 1) return false;
                lates = 0;
            } else if (s.charAt(i) == 'L') {
                if (++lates > 2) return false;
            } else {
                lates = 0;
            }
        }
        
        return true;
    }
}
