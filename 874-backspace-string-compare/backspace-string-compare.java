import java.util.Stack;

public class Solution {
    public boolean backspaceCompare(String S, String T) {
        return buildFinalString(S).equals(buildFinalString(T));
    }

    private String buildFinalString(String str) {
        Stack<Character> stack = new Stack<>();
        
        for (char c : str.toCharArray()) {
            if (c != '#') {
                stack.push(c);
            } else if (!stack.isEmpty()) {
                stack.pop();
            }
        }
        
        StringBuilder result = new StringBuilder();
        while (!stack.isEmpty()) {
            result.append(stack.pop());
        }
        
        return result.toString();
    }
}
