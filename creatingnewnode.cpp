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

Node*createnewnode()
{
   int data,n;
   cout<<"enter number of nodes to be made\n";
   cin>>n;
   int count=n;
   Node*head=NULL;
   Node*tail=NULL;
   
   
   while(count--)
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
void display(Node*head) { 
   Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main()
{ Node*head;
	head=createnewnode();
	display(head);
	return 0;
}

