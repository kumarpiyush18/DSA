#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;
// function for print the tree
void printTree(TreeNode* root){
	cout<<root->data<<endl;
	for(int i=0;i<root->children.size();i++){
		printTree(root->children[i]);
	}
}
// function that maketree and return the root !!
TreeNode* makeTree(){
	int data;
	cout<<"Enter the root data";
	cin>>data;
	TreeNode *root=new TreeNode(data);
	queue<TreeNode*> buffer; // queue to take input breadth wise
	buffer.push(root);
	while(buffer.size()!=0){
		TreeNode* front=buffer.front();
		buffer.pop();
		cout<<"Enter the number of children of "<<front->data<<endl;
		int numchild;
		cin>>numchild;
		for(int i=0;i<numchild;i++){
			int childData;
			cout<<"enter the "<<i<<"th child of"<<front->data<<endl;
			cin>>childData;
			TreeNode *child=new TreeNode(childData);
			root->children.push_back(child);
			buffer.push(child);
		}

	}
	return root;
}

int countNode(TreeNode* root){
	int ans=1;
	for(int i=0;i<root->children.size();i++){
		ans+=countNode(root->children[i]);
	}
	return ans;
}

void printLevelWise(TreeNode* root){
	queue<TreeNode*> q;
	q.push(root);
	while(q.size()!=0){
		TreeNode *front=q.front();
		q.pop();
		cout<<front->data<<" ";
		for(int i=0;i<front->children.size();i++){
			q.push(front->children[i]);
		}
	}
}
int main()
{
	// input tree 
	//1 3 2 3 4 1 5 1 8 1 10 2 6 7 1 9 1 11 0 0 0 1 12 1 13 0
	TreeNode* root=makeTree();
	printTree(root);
	cout<<endl;
	//printNodeAt_D(root,3);
	printLevelWise(root);
}