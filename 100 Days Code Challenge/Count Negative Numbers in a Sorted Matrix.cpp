class Solution {
public:

    
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            int index=upper_bound(grid[i].begin(), grid[i].end(), 0, greater<int>()) - grid[i].begin();
            count+=(n-index);
        }
        return count;
    }
};
