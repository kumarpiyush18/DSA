#include<bits/stdc++.h>
#include"Node.cpp"
using namespace std;

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

void PrintList(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
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
	

	PrintList(head);

}