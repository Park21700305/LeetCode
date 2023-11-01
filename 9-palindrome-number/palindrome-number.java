public class Solution {
    public static void main(String[] args) {
        int x = 121;
        System.out.println(isPalindrome(x));
    }

    public static boolean isPalindrome(int x) {
        if (x < 0) return false;
        int temp = x;
        int rev = 0;
        while (temp != 0) {
            int pop = temp % 10;
            temp /= 10;
            rev = rev * 10 + pop;
        }
        return rev == x;
    }
}
