#include<bits/stdc++.h>
#include"Node.cpp"
using namespace std;
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
	Node *n1=new Node(10);
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
	n5->next=NULL;

	PrintList(head);

}