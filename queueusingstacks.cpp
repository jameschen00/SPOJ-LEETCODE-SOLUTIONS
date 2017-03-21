#define pb push_back
#define mk make_pair
#define ll long long int
#define pp pair<ll,ll>
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;

struct sNode
{
	int data;
	struct sNode*next;
};

void push(struct sNode**top_ref,int new_data );

int pop(struct sNode** top_ref);

struct queue
{
	struct sNode *stack1;
	struct sNode *stack2;
};

void enqueue(struct queue *q,int x)
{
	push(&q->stack1,x);
}

int dequeue(struct queue *q)
{
	int x;
	if(q->stack1==NULL && q->stack2==NULL)
	{
		cout<<"Queue is empty";
		getchar();
		exit(0);
	}
	if(q->stack2==NULL)
	{
		while(q->stack1!=NULL)
		{
			x=pop(&q->stack1);
			push(&q->stack2,x);
		}
	}
	x=pop(&q->stack2);
	return x;
}
void push(struct sNode**top_ref,int new_data)
{
	struct sNode*new_node=(struct sNode*)malloc(sizeof(struct sNode));
	if(new_node==NULL)
	{
		cout<<"Stack Overflow/n";
		getchar();
		exit(0);
	}
	new_node->data=new_data;
	
	new_node->next=(*top_ref);
	
	(*top_ref)=new_node;
}
int pop(struct sNode**top_ref)
{
	int res;
	struct sNode*top;
	
	if(*top_ref==NULL)
	{
		cout<<"Stack Overflow/n";
		getchar();
		exit(0);
	}
	else
	{
		top=*top_ref;
		res=top->data;
		*top_ref=top->next;
		free(top);
		return res;
	}
}

int main()
	{
		struct queue *q=(struct queue*)malloc(sizeof(struct queue));
		q->stack1=NULL;
		q->stack2=NULL;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			enqueue(q,a[i]);
		}
		for(int j=0;j<n;j++)
		{
			cout<<dequeue(q)<<" ";
		}
		getchar();
	return 0;
	}


