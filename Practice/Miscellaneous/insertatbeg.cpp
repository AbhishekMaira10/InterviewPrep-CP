#include <iostream>
using namespace std;
class Node { 
public:
    int data; 
	Node*next; 
	Node(int data)
	{
		this->data=data;
		next=NULL;
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
	 	tail=tail->next;
	 	
	 }
	} 
	return head;  
}
Node*insertatbeg()
{
	cout<<"the value to be inserted at beginning is:\n";
	int x;
	cin>>x;
	Node*newnode=new Node(x);
	newnode->next=head;
	head=newnode;
	return head;
}
void display(Node*head) { 
   Node* ptr;
   ptr = head;
   while (ptr!= NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main()
{ 
    Node*head1;
	Node*head2;
	Node*head3;
	head1=createlinkedlist();
	display(head1);
	cout<<endl;
	head2=insertatbeg();
	display(head2);
	head3=insertatbeg();
	display(head3);
	return 0;
}
