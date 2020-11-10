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
Node*deleteatnthpos()
{
	int n,count=0;
	cout<<"enter the position at which you want to delete:";
	cin>>n;
	Node*ptr=head;
    if(n==1)
    {
		head=ptr->next;
		delete ptr;
		return head;
	}
    while (count!=n-2){ 
    count++;
    ptr=ptr->next;
	}
    Node*temp=ptr->next;
	ptr->next=temp->next;
	delete temp; 
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
	head2=deleteatnthpos();
	display(head2);
	return 0;
}
