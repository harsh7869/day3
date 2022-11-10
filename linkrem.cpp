#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
node *input(node *head,int d){
	node *ptr=head;
	node *temp=new node();
	temp->data=d;
	temp->next=NULL;
	while(ptr->next!=NULL)
	{
	  ptr= ptr->next;
	}
	
	ptr->next=temp;
	return head;
	
}
void printlist(node* root)
{
	while(root!=NULL){
		cout<<root->data<<" -> ";
		root=root->next;
	}
}

int main(){
	int n;
	node *head=NULL;
	cout<<"no. of elements"<<endl;
	cin>>n;
	cout<<" enter element"<<endl;
	int temp;
	cin>>temp;
	head=new node();
	head->data=temp;
	head->next=NULL;

	for(int i=0;i<n-1;i++)
	{
		cin>>temp;
		head=input(head,temp);
		
	}
	
	printlist(head);
    return 0;	
}