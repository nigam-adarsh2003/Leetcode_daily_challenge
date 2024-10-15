// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    long long minimumSteps(string s) {
        long long count=0;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                c+=1;
            }
            if(s[i]=='0'){
                count+=c;
            }
    }
    return count;
    }
};
