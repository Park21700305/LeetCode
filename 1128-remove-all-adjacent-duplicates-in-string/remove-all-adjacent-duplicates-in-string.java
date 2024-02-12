public class Solution {
    public String removeDuplicates(String s) {
        StringBuilder sb = new StringBuilder();
        for (char c : s.toCharArray()) {
            int length = sb.length();
            if (length > 0 && sb.charAt(length - 1) == c) {
                sb.deleteCharAt(length - 1);
            } else {
                sb.append(c);
            }
        }
        return sb.toString();
    }
}
