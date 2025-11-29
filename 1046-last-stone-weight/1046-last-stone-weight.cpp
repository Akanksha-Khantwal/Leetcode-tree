class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         priority_queue<int>q;
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);

        }
        long long result;
        while(q.size()>1){
           int a=q.top();
           q.pop();
           int b=q.top();
           q.pop();
           if(a!=b){
            q.push(a-b);
           }
        }
           return q.empty()?0:q.top();
    }
};