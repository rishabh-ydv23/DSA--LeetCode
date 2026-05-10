/**

“Lowest” means closest to the given nodes, not the root.
The LCA is the first node where paths to both nodes meet.

Because it is a BST, we can use this property:
Left subtree values < root
Right subtree values > root

For nodes p and q:
If both are smaller than root → go left
If both are greater than root → go right
Otherwise → current root is the LCA

 */
//Iterative 
/*
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root!=NULL){
            if(p->val < root->val && q->val < root->val){
                root=root->left;
            }else if(p->val > root->val && q->val > root->val){
                root=root->right;
            }else{
                return root;
            }
        }
        return NULL;
    }
};
*/
//Recursive
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
            if(p->val < root->val && q->val < root->val){
                return lowestCommonAncestor(root->left,p,q);
            }
            if(p->val > root->val && q->val > root->val){
                return lowestCommonAncestor(root->right,p,q);
            }
            
        
        return root;
    }
};