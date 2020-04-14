#include <iostream>
using namespace std;
class Node{ 
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
Node*reverse()
{
	Node*current,*prev,*next1;
	current=head;
	prev=NULL;
    while (current!=NULL){ 
    next1=current->next;
    current->next=prev;
    prev=current;
    current=next1;
	}
	head=prev;
	return head;
}
void display(Node*head) { 
   Node* ptr;
   ptr = head;
   while (ptr!= NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   }
   cout<<endl;
} 
int main()
{ 
    Node*head1;
	Node*head2;
	head1=createlinkedlist();
	display(head1);
	head2=reverse();
	display(head2);
	return 0;
}
