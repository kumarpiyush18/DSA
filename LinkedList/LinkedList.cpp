#include<bits/stdc++.h>
#include"Node.cpp"
using namespace std;
// insert node at the end of the list
Node* InsertNodeAtEnd(Node *head,int data){
	Node *newNode = new Node(data);
	if(head==NULL)
		head=newNode;
	Node *temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=newNode;
	newNode->next=NULL;
	return head;
}
// insert new node at the begining
Node* InsertNodeAtBegin(Node *head,int data)
{
	Node* newNode=new Node(data);
	if(head==NULL)
		head=newNode;
	else{
		newNode->next=head;
		head=newNode;
	}
	
	return head;
}
// function to print list
void PrintList(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
// length of a list using iterative method
int Length_itr(Node *head)
{
	Node *temp=head;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
// find length of list using recursion
int Length_rec(Node *head)
{
	Node* temp=head;
	if(temp==NULL)
		return 0;
	return 1+Length_rec(temp->next);
}


//search a particular element in the list using(iterative or recursive)
bool Search_itr(Node *head,int element){
	Node *temp=head;
	while(temp!=NULL){
		if(temp->data==element)
			return true;
		temp=temp->next;
	}
	return false;
}

bool Search_rec(Node *head,int element){
	Node *temp=head;
	if(temp->data==element)
		return true;
	else{
		return Search_rec(temp->next,element);
	}
	return false;
}
// function to get the Nth node from the list;
int getNode(Node *head,int index){
	Node *temp=head;
	while(index--){
		temp=temp->next;
	}
	return temp->data;

}
void Delete_List(Node *head){
	Node *curr=head;
	Node *temp;
	while(curr!=NULL){
		temp=curr->next;
		free(curr);
		curr=temp;
	}
	head=NULL;
}
int middle_LL(Node *head){
	Node *fast=head;
	Node *slow=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow->data;
}
int main()
{
	//Dynamically
	Node *head=NULL; 
	/*Node *n1=new Node(10);
	// store the address of the first Node in the head;
	head=n1;

	Node *n2=new Node(20); // new oprator return the pointer
	Node *n3=new Node(30);
	Node *n4=new Node(40);
	Node *n5=new Node(50);
	n1->next=n2; // assign the next pointer in n1 with the address of n2
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=NULL;*/
	//head=InsertNodeAtBegin();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int data;
		cin>>data;
		//head=InsertNodeAtEnd(head,data);
		head=InsertNodeAtBegin(head,data);
	}
	
	cout<<"Length of List:"<<Length_itr(head)<<endl;
	cout<<"Length using recursion:"<<Length_rec(head)<<endl;
	cout<<"Enter the number to be find in Linked List\n";
	//int x;
	//cin>>x;
	//cout<<"using iterative approch"<<Search_itr(head,x)<<endl;
	//cout<<"using recursion"<<Search_rec(head,x)<<endl;
	//cout<<"Nth node from the List"<<getNode(head,3);

	PrintList(head);
	cout<<endl;
	//Delete_List(head);
	//PrintList(head);
	cout<<middle_LL(head)<<endl;


}