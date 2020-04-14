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
Node*createlinkedlist()
{
   int data,n;
   cout<<"enter number of nodes to be made\n";
   cin>>n;
   Node*head=NULL;
   while(n--)
   { 
    cin>>data;
   	Node*newnode=new Node(data);
    if(head==NULL)
     {
    	head=newnode;
	 }
	else
	{
	 Node*temp=head;
	 while(temp->next!=NULL)
	 {
	 	temp=temp->next;
	 }
	 temp->next=newnode;
	}
	} 
	return head;    
}
void display(Node*head) { 
   Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main()
{
    Node*head;
	head=createlinkedlist();
	display(head);
	return 0;
}
