class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans1;
        vector<int> ans2;
        for (int i = 0; i < arr2.size(); ++i) {
            for (int j = 0; j < arr1.size(); ++j) {
                if (arr2[i] == arr1[j]) {
                    ans1.push_back(arr1[j]);
                }
            }
        }    
        for (int i = 0; i < arr1.size(); ++i) {
            if (find(arr2.begin(), arr2.end(), arr1[i]) == arr2.end()) {
                ans2.push_back(arr1[i]);
            }
        }
        sort(ans2.begin(), ans2.end());
        ans1.insert(ans1.end(), ans2.begin(), ans2.end());     
        return ans1;
    }
};
