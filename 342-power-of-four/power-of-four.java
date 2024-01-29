public class Solution {
    public boolean isPowerOfFour(int num) {
        // num이 양수인지 확인하고, 2의 제곱수인지 확인합니다.
        return num > 0 && (num & (num - 1)) == 0 && (num & 0x55555555) != 0;
    }
}
