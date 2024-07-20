// Time Complexity - O(m+n)
// Space Complexity - O(m*n)

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size();
        int m=colSum.size();
        int i=0;
        int j=0;
        vector<vector<int>>res(n,vector<int>(m,0));
        while(i<n && j<m){
            res[i][j]=min(rowSum[i],colSum[j]);
            rowSum[i]-=res[i][j];
            colSum[j]-=res[i][j];
            if(rowSum[i]==0){
                i++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};
