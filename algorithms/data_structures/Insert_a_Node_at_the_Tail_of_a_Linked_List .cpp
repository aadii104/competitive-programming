// struct Node{
//     int data;
//     struct Node *node;
// }
Node* Insert( Node *head, int data){
    Node *last = new Node;
    last-> data = data;
    last -> next = NULL;

    if(head== NULL){
        head = last;
    }else{
        Node *temp = new Node;
        temp = head;
        while(temp->next != NULL){
            temp = temp-> next;
        }
        temp -> next =  last;
    }
    return head;
}