class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int size=grid.size();
        int n=0;
        int count=0;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                for(int k=0;k<size;k++){
                    if(grid[i][k]==grid[k][j]){
                        n++;
                    }
                    else{
                        break;
                    }
                }
                if(n==size){
                    n=0;
                    count++;
                }
                else{
                    n=0;
                }
            }
        }
        return count;
    }
};
