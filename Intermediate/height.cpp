
    /*
            1
           / \     
          2   3
         / \ / \
        4  5 6  7
     */ 


int calcHeight(Node* root){
    if(root==null){
        return 0;
    }
    return max(calcheight(root->left), calcheigth(root->right)) +1;

    
    
    int calcDiameter(Node*root)
    if (root == Null){
        return =0;
    }
    
    
    
    int lheight = calaheight(root->left);
int rheight = calcheight(root->right);
return max(lheight), rameterheight+1;

int ldiameter=calcdiameter(root->left);
int rdiameter=calcdiameter(root->right);

return max(currdiameter,max(ldiameter, rdiameter));

}

int main(){
    node*root=new node(1);
    root->left=new node(2);
    root->left=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left->=new node(6);
    root->right->right=new node(7);

    //diameter of binary tree
    cout <<calcdiameter(root)<<"\n";
    return 0;

}







 