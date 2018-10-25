
struct TreeNode{
    int data;  
    TreeNode* right;
    TreeNode* left;     
};

struct TreeNode*mergeTrees( TreeNode*head1, TreeNode*head2){
  
 // struct TreeNode*der = head1->right;
  //struct TreeNode*izq = head1->left;
  
  if (head2==NULL) 
    return;
    
  if (head1 ==NULL)
    return NULL;
  
      head1                     head2
 left     right               left    right 
            |
           |  |
         |    | 
       |      | 
       der    |
    left    right
  
  if(head1->data < head2->data){
    addNode(head1, head2->data);
    mergeTrees(head1->right,head2->right);
  }
  
  if(head1->data > head2->data){
    addNode(head2);
    mergeTrees(head1->left, head2->left);
  }
  
  return head1;
  
}

 addNode(Node*head1,int num){
   struct Node* newN = (struct Node*)malloc(sizeof(struct Node*head1));
   newN->data = num;
   if (head1 == NULL){
     return head1= newN;
     
 }
   else if (num > head1->data){
     return head1->left= newN;
   }
   else if(num < head1->data){
     return head1->right= newN;
   }
     
     }
