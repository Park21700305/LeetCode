class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int low = 0, high = (long long int)(num);
        long long int mid;
        if(num <= 1)return true;
        while((high - low) > 1){
            mid = low + (high - low) / 2;
            long long int sqr = (mid * mid);
            if(sqr == num) return true;
            else if(sqr > num){
                high = mid;
            }else{
                low = mid;
            }
        }
        return false;
    }
};