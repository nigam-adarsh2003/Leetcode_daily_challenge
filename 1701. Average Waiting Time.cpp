class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        int m=customers[0].size();
        int finishTime=0;
        int waitingTime=0;
        for(auto& customer: customers){
            int arrival=customer[0];
            int wait=customer[1];
            finishTime=max(finishTime,arrival)+wait;
            waitingTime+=finishTime-arrival;
        
        }
        return (double)waitingTime/n;
    }
};
