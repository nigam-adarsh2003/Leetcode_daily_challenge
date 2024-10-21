class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            for(int j=0;j<num+1;j++){
                if((j | (j + 1)) == num){
                    ans.push_back(j);
                    break;
                }
                if(j==num){
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};