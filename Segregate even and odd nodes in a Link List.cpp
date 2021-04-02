class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node * temp =head;
        vector<int> v;
        while(temp!=NULL)
        {
            v.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0)
            {
                temp->data = v[i];
                temp=temp->next;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==1)
            {
                temp->data = v[i];
                temp=temp->next;
            }
        }
        return head;
    }
};
