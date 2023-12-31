class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> a(n+1);
        a[0]=0;
        for(int i=0;i<n;i++){
            a[i+1]=a[i]+gain[i];
        }
        return *max_element(a.begin(),a.end());
    }
};
