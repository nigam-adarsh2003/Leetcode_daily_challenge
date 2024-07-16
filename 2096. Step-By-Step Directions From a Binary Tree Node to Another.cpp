class Solution {
public:
    bool findPath(TreeNode* LCA, int target, string& path) {
        if(LCA == NULL) {
            return false;
        }
        if(LCA->val == target) {
            return true;
        }
        path.push_back('L');
        if(findPath(LCA->left, target, path) == true) {
            return true;
        }
        path.pop_back();
        path.push_back('R');
        if(findPath(LCA->right, target, path) == true) {
            return true;
        }
        path.pop_back();
        return false;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string rootToSrc  = "";
        string rootToDst = "";
        findPath(root, startValue, rootToSrc); 
        findPath(root, destValue,  rootToDst); 
        int l = 0; 
        while(l < rootToSrc.length() && l < rootToDst.length() && rootToSrc[l] == rootToDst[l]) {
            l++;
        }
        string result = "";

        for(int i = 0; i < rootToSrc.length() - l; i++) {
            result.push_back('U');
        }
        for(int i = l; i < rootToDst.length(); i++) {
            result.push_back(rootToDst[i]);
        }
        return result;
    }
};
