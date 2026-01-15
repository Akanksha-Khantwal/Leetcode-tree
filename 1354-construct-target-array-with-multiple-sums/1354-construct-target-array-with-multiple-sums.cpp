class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long>p;
        long long sum=0,maxele,element,remSum;
        for(int i=0;i<target.size();i++){
            p.push(target[i]);
            sum+=target[i];
        }
        while(p.top()!=1){
            maxele=p.top();
            p.pop();
            remSum=sum-maxele;

            if(remSum<=0 || remSum>=maxele)
            return 0;
            element=maxele%remSum;
            if (element==0){
                if(remSum!=1)
                return 0;
                else 
                return 1;

            }
            sum=remSum+element;
            p.push(element);
        }
        return 1;
        
    }
};