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
   cout<<"the value to be inserted is:\n";
	cin>>x;
	Node*newnode=new Node(x);
	ptr->next=newnode;
	newnode->next=ptr2;
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
	head1=createlinkedlist();
	display(head1);
	cout<<endl;
	head2=insertatnthpos();
	display(head2);
	return 0;
}
