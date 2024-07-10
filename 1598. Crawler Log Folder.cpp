// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(int i=0;i<logs.size();i++){
            if(logs[i]!="../" && logs[i]!="./"){
                count++;
            }
            else if(logs[i]=="../"){
                count--;
                if(count<0){
                    count=0;
                }
            }
            else{
                continue;
            }
        }
        return count;
    }
};
