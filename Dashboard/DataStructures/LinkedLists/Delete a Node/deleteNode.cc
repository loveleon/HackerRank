/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *prv = NULL;
    Node *cur = head;
    int count = 0;
    
    while(cur && count < position){
        count = count + 1;
        prv = cur;
        cur = cur->next;
    }
    if(count != position){
        return NULL;
    }else{
        if(prv == NULL){
            cur = cur->next;
            head = cur;
            // delete 
        }else{
           prv->next = cur->next;            
        }
    }
    return head;
}