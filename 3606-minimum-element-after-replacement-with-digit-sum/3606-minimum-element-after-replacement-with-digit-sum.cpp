class Solution {
public:
    int minElement(vector<int>& nums) {
        int m=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int num=nums[i];
            while(num>0){    
            int r=num%10;    
            sum=sum+r;    
            num=num/10;    
            }
            m=min(m,sum);
        }
        return m;
    }
};