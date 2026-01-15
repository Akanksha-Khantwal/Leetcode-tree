class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {

        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p;
       int minimum,maximum=INT_MIN;
       for(int i=0;i<nums.size();i++){
        p.push({nums[i][0],{i,0}});
        maximum=max(maximum,nums[i][0]);
        }
        minimum=p.top().first;
        vector<int>ans(2);
        ans[0]=minimum;
        ans[1]=maximum;
        pair<int,pair<int,int>>temp;
        int row,col,data;
        while(p.size()==nums.size()){
            temp=p.top();
            p.pop();
            data=temp.first;
            row=temp.second.first;
            col=temp.second.second;

            if(col+1<nums[row].size()){
                p.push({nums[row][col+1],{row,col+1}});
                maximum=max(maximum,nums[row][col+1]);
                minimum=p.top().first;
                
            }
            if(maximum-minimum<ans[1]-ans[0]){
                ans[0]=minimum;
                ans[1]=maximum;
            }
        }
    return ans;
    }
};