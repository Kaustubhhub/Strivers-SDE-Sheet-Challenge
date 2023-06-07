
bool detectCycle(Node *head)
{
    if(head==NULL || head->next==NULL)return false;

    Node* slow = head, *fast = head;

    while(fast != NULL && fast->next != NULL && slow!=NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast==slow)return true;
    }

    return false;
}