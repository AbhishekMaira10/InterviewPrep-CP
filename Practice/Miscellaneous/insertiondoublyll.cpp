#include <iostream>
using namespace std;
class Node { 
public:
    int data; 
	Node*next;
	Node*prev; 
	Node(int data)
	{
		this->data=data;
		next=NULL;
		prev=NULL;
	}
}; 
Node*head=NULL;
Node*tail=NULL;
Node*createlinkedlist()
{
   int data,n;
   cout<<"enter number of nodes to be made\n";
   cin>>n;
   while(n--)
   {  cin>>data;
      Node*newnode=new Node(data);
     if(head==NULL)
     {
     	head=newnode;
     	tail=newnode;
	 }
	 else
	 {
	 	tail->next=newnode;
	 	newnode->prev=tail; 
	 	tail=tail->next;

	 }
	} 
	return head;  
}
Node*insertatnthpos()
{
	int n,count=0,x;
	cout<<"enter the position at which you want to insert:";
	cin>>n;
	Node*ptr;
	Node*ptr2;
    ptr=head;
    while (ptr!= NULL) { 
    count++; 
    if(count==n-1)
    {
    ptr2=ptr->next;
    break;
	}
	else
    ptr = ptr->next; 
   }
   cout<<ptr->data<<" "<<ptr2->data<<endl;
   cout<<"the value to be inserted is:\n";
	cin>>x;
	Node*newnode=new Node(x);
	newnode->next=ptr2;
	ptr->next=newnode;
	newnode->prev=ptr;
	ptr2->prev=newnode;
	return head;
}
void display(Node*head) { 
   Node* ptr;
   ptr = tail;
   while (ptr!= NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->prev; 
   } 
} 
int main()
{ 
    Node*head;
    Node*head2;
	head=createlinkedlist();
	display(head);
	cout<<endl;
	head2=insertatnthpos();
	display(head2);
	return 0;
}
