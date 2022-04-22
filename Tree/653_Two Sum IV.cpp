class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> m1;
        queue<TreeNode*> q;
        //q.push(root);
        q.push(root);
        while(!q.empty()){
            
            TreeNode* r =q.front();
            q.pop();
            if(r==NULL)
                continue;
            if(find(m1.begin(),m1.end(),r->val)!=m1.end())
                return true;
            else
                m1.push_back(k-r->val);
            q.push(r->left);
            q.push(r->right);
        }
        return false;
    }
};
