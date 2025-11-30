class KthLargest {
public:
    int k;
    priority_queue<long long, vector<long long>, greater<long long>> q;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        
        for (int i = 0; i < nums.size(); i++) {
            q.push(nums[i]);
            if (q.size() > k) {
                q.pop();
            }
        }
    }
    
    int add(int val) {
        q.push(val);
        if (q.size() > k) {
            q.pop();
        }
        return q.top();  
    }
};
