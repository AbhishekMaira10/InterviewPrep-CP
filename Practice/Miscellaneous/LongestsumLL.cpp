#include<iostream>
using namespace std;
class Node
{   public:
	int data;
	Node*next;
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}
};
Node*takeinput()
{
	int data;
	cin>>data;
	
	Node*head=NULL;
	Node*tail=NULL;
	while(data!=-1)
	{  Node*newnode=new Node(data);
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		{
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
		
	}
	return head;
}
int fun(Node* head,int k)
{
    int i,sum=0,maxi=0;
    Node*temp=head;
    while(temp->next!=NULL)
    {
        i=0;
        while(i<k)
        {
            sum+=temp->data;
            i++;
            temp=temp->next;
            if(i<k-1&&temp->next==NULL)
            goto label;
        }
        if(sum>=maxi)
        maxi=sum;
        label:;
    }
    return maxi;
}
int main()
{
    Node* head;
    head=takeinput();
    int maxsum,k;
    cin>>k;
    maxsum =fun(head,k);
    cout<<maxsum<<endl;
}

