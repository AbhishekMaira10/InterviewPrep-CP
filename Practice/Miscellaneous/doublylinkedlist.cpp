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
	head=createlinkedlist();
	display(head);
	return 0;
}
