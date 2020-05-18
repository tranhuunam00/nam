#include<iostream>
using namespace std;

struct node
{
	node *next;
	int val;
};
void addnode (node *&head,int val)
{
	node *newnode = new node();
	newnode->next= NULL;
	newnode->val=val;

	if(head == NULL)
	{head =newnode;
	return;
	}
	node *currnode=head;
	while(currnode->next!=NULL)
	{
		currnode =currnode->next;
	}
	currnode->next =newnode;
}
void showlinkedlist(node *head)
{
	if(head==NULL)
	{
		cout<<" deo co "<<endl;
		return ;

	}
	node *currnode =head;
	int i=0;
	while (currnode != NULL)
	{
		cout <<"node "<< i << " : " <<currnode->val<<endl;
		currnode =currnode->next;
		i++;
	}
}
int main()
{
	node* head = new node;
	head->val = 4;
	head->next = NULL;

	addnode(head, 2);
	addnode(head ,3);
	addnode(head,2);
	showlinkedlist(head);
	return 0;
}

