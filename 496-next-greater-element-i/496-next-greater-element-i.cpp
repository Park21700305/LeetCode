class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map <int, int> umap;
        stack<int> s;
        
        for(int i = nums2.size()-1; i>=0; i--)
        {
            int ele = nums2[i];
            while(!s.empty() && s.top()<=ele)
            {
                s.pop();
            }
            int result = (s.empty()) ? -1 : s.top();
            umap.insert({ele, result});
            s.push(ele);
        }
        
        vector<int> answer;
        for(auto x: nums1)
        {
            answer.push_back(umap[x]);
        }
        return answer;
    }
};