#include<time.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
}Node;
Node *getnode();
Node* getnode()
	{
		return((Node*)malloc(sizeof(Node)));
	} 
int main()
	{
		int b,r,a=0;
		Node *root=getnode();
		root->next=NULL;
		Node *temp=root;
		int size;
		printf("Enter the size of the first linked list");
		scanf("%d",&size);
		while(size!=0)
		{
			printf("Enter the data for each node");
			scanf("%d",&root->data);
			root->next=getnode();
			root = root->next;
			size--;
		}
		temp=root;
		Node*start=getnode();
		start->next=NULL;
		Node*tempo=start;
		int c;
		printf("Enter the size of the second linked list:");
		scanf("%d",&c);
		while(c!=0)
		{
			printf("Enter the data for each node:");
			scanf("%d",&start->data);
			start->next=getnode();
			start=start->next;
			c--;
		}
		tempo=start;
		while(root!=NULL)
		{
			root=root->next;
			start=start->next;
		if(root->next==start->next)
		{
		  b=0;	
		}
		else
		b=1;
		if (b==1)
		{
		
		tempo=start;temp=root;
		while(root!=NULL && start!=NULL )
		{
			root=root->next;
			while( root->data!=start->data)
			{
			start=start->next;
			}
		}
		if(root!=NULL && start!=NULL)
		{
			a=root;
			while(root!=NULL)
			{
				root=root->next;
				if (root==NULL)
				root->data=a;
			}
			root->next=start;
		}
		else if (root==NULL && start==NULL)
		{
		printf("COmmon node was not found.");
		srand(time(NULL));
		r=rand();
		root->data=r;
		root->data=start->data;
		root->next=start->data;
		}
	}
	else if (b==0)
	{
		start=start->next;
		start->data=r;
	}
	return 0;
	}
	

