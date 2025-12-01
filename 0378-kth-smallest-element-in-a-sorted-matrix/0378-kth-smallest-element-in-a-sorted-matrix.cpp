class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<pair < int, pair<int,int>> ,vector<pair< int ,pair<int,int>>>,greater <pair<int ,pair<int,int>>>>p;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            p.push({matrix[i][0],{i,0}});
        }
        while(--k){
            auto current=p.top();
            p.pop();

            int val=current.first;
            int r=current.second.first;
            int c=current.second.second;
            if(c+1<n){
                p.push({matrix[r][c+1],{r,c+1}});
            }


        }
        return p.top().first;
    }
};