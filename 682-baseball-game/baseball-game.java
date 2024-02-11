import java.util.Stack;

class Solution {
    public int calPoints(String[] ops) {
        Stack<Integer> stack = new Stack<>();
        
        for (String op : ops) {
            if (op.equals("+")) {
                int top = stack.pop();
                int newTop = top + stack.peek();
                stack.push(top); // 이전 점수를 다시 스택에 넣음
                stack.push(newTop); // 새로운 점수를 스택에 넣음
            } else if (op.equals("D")) {
                stack.push(stack.peek() * 2);
            } else if (op.equals("C")) {
                stack.pop();
            } else {
                stack.push(Integer.parseInt(op));
            }
        }
        
        int total = 0;
        for (int score : stack) {
            total += score;
        }
        return total;
    }
}
