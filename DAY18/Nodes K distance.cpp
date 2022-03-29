class Solution
{
public:

    void find_parent(TreeNode *root, unordered_map<TreeNode *, TreeNode *>&par)
    {
        queue<pair<TreeNode *, TreeNode *>> q;
        q.push({root, NULL});

        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                TreeNode *node = q.front().first;
                par[node] = q.front().second;
                q.pop();

                if(node -> left)
                    q.push({node -> left, node});

                if(node -> right)
                    q.push({node -> right, node});
            }
        }
    }

    void dfs(TreeNode *root, int k, unordered_map<TreeNode *, TreeNode *>&par, unordered_map<TreeNode *, bool>&visit, vector<int> &ans)
    {
        if(!root) return;
        if(visit.find(root) != visit.end()) return;
        if(k == 0) ans.push_back(root ->val);

        visit[root] = true;

        dfs(par[root], k - 1, par, visit, ans);
        dfs(root -> left, k - 1, par, visit, ans);
        dfs(root -> right, k - 1, par, visit, ans);
    }

    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        unordered_map<TreeNode *, TreeNode *>par;
        unordered_map<TreeNode *, bool> visit;
        vector<int>ans;
        find_parent(root, par);
        dfs(target, k, par, visit, ans);
        return ans;
    }
};
// @lc code=end
