class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>p;
        for(int i=0;i<gifts.size();i++){
            p.push(gifts[i]);
        }
        long long total_gift;
        while(k){
            int b=p.top();
            p.pop();
            b=sqrt(b);
            p.push(b);
            k--;
        }
        long long sum=0;
        while(!p.empty()){
            sum+=p.top();
            p.pop();
        }
        return sum;
        
    }
};