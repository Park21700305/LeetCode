class Solution {
    public static String reversePrefix(String word, char ch) {
        int index = word.indexOf(ch);
        String result = "";
        String word1 = word.substring(0, index + 1);
        String rest = word.substring(index + 1);
        if(index == -1) return word;
        else {
            StringBuffer sb = new StringBuffer(word1);
            result += sb.reverse().toString();
            result += rest;
            return result;
        }
    }
}