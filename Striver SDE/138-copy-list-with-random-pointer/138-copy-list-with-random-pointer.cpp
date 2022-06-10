/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {        
        if(head==NULL)
            return NULL;
        Node* newNode = new Node(head->val);
        Node* tempN = newNode;
        Node* tempN1 = newNode;
        Node* temp1 = head;
        Node* temp = head;        
        int i=0,j;
        for(;temp->next!=NULL;temp=temp->next, tempN = tempN->next,i++)
        {
            tempN->val = temp->val;
            tempN->next = new Node(temp->next->val);
            //cout<<i<<" "<<temp<<" "<<tempN<<" "<<temp->random<<"\n";            
        }
        //cout<<"\n";        
        for(i=0,tempN=newNode,temp=head;
            tempN!=NULL;
            temp=temp->next, tempN=tempN->next,i++
        )
        {      
            //cout<<temp->random<<" ";
            if(temp->random == NULL)
            {
                tempN->random = NULL;    
                //cout<<"NULL\n";
                continue;
            }                
            for(j=0,temp1=head,tempN1=newNode;
                temp1!=NULL && temp1!=temp->random;
                temp1=temp1->next,tempN1=tempN1->next,j++);
            tempN->random = tempN1;
            //cout<<i<<" "<<temp1<<" "<<tempN1<<" "<<j<<"\n";            
        }        
        //cout<<i<<"\n";
        return newNode;
    }
};