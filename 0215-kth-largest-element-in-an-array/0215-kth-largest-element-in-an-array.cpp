class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<long long ,vector<long long>,greater<long long>>p;
        for(int i=0;i<k;i++){
            p.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]>p.top()){
                p.pop();
                p.push(nums[i]);
            }
        }
        return p.top();
    }
};