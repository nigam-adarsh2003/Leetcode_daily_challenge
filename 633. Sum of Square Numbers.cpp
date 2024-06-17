class Solution {
public:
    bool judgeSquareSum(int c) {
        long int low=0;
        long int high=int(sqrt(c));
        while(low<=high){
            long int curr=low*low+high*high;
            if(curr==c){
                return true;
            }
            if(curr<c){
                low+=1;
            }
            else{
                high-=1;
            }
        }
        return false;
    }
};
