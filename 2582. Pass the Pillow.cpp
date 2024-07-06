// Time Complexity - O(1)
// Space Complexity - O(1)

class Solution {
public:
    int passThePillow(int n, int time) {
        int FullRound;
        int HalfRound;

        FullRound=int(time/(n-1));
        HalfRound=time%(n-1);
        if(FullRound%2==0){
            return HalfRound+1;
        }
        else{
            return n-HalfRound;
        }
    }
};
