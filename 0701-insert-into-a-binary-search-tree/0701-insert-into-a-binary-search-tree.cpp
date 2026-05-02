//recursive solution
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)return new TreeNode(val);
        TreeNode *curr=root;
        while(true){
            if(val<curr->val){
                if(curr->left==NULL){
                    curr->left=new TreeNode(val);
                    break;
                }
                curr=curr->left;
            }else{
                if(curr->right==NULL){
                    curr->right=new TreeNode(val);
                    break;
                }
                curr=curr->right;
            }
        }
        return root;
    }
};



//recursive solution
/*

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);

        if(val< root->val){
            root->left=insertIntoBST(root->left,val);
        }else{
            root->right=insertIntoBST(root->right,val);
        }
        return root;
    }
};

*/