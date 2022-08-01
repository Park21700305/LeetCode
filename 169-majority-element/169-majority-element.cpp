class Solution {
public:
    int majorityElement(vector<int>& nums){
        int len=nums.size(), maj=nums[0], count=1;
        for(auto i=1;i<len;i++){
            if(nums[i]==maj)
                count++;
            else
                count--;
            if(count==0){
                maj=nums[i];
                count=1;
            }
        }
        return maj;
    }
};