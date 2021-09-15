class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> pre, in, post;

        if(! root)
            return {};

        stack <pair<TreeNode*, int> > st; 
        st.push({root, 1});

        while(! st.empty()) 
        {
            root = st.top().first;
            int num = st.top().second;
            st.pop();

            if(num == 1)
            {
                pre.push_back(root -> val);
                st.push({root, num + 1});
                if(root -> left)
                    st.push({root -> left, 1});
            }

            else if(num == 2)
            {
                in.push_back(root -> val);
                st.push({root, num + 1});
                if(root -> right)
                    st.push({root -> right, 1});
            }

            else
                post.push_back(root -> val);
            
        }
        return pre;
    }
};
