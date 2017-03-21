#define pb push_back
#define mk make_pair
#define ll long long int
#define pp pair<ll,ll>
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

using namespace std;
//REturn sum of arr. ANd partial sums of array elements are stored in bitree
int getSum(int BITree[],int index)
{
	int sum=0;//initialize result
	//index in bitree is 1 more than index in arr
	index++;
	//traverse ancestors of bitree
	while(index>0)
	{
		sum=sum+BITree[index];
		index-=index & (-index);
	}
	return sum;
}
//Updates a node in bitree at given index
//the given value"val" is added to BITree[i] and all of its ancestors in tree
void update(int BITree[],int n,int index,int val)
{
	index++;
	while(index<=n)
	{
		BITree[index]+=val;
		index=index+index & (-index);
	}
}
int *constructBITree(int arr[],int n)
{
	int *BITree=new int[n+1];
	for(int i=1;i<n+1;i++)
	{
		BITree[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		update(BITree,n,i,arr[i]);
	}
	for(int i=1;i<n+1;i++)
		cout<<BITree[i]<<"\t";
		
	return BITree;
}
int main()
	{
		int freq[]={2,1,1,3,2,3,4,5,6,7,8,9};
		int n=sizeof(freq)/sizeof(freq[0]);
		int *BITree=constructBITree(freq,n);
		cout<<"\nSum of elements in arr[0...5]="<<getSum(BITree,5);
		//TEst the update operation
		freq[3]+=6;
		update(BITree,n,3,6);
		cout<<"\nSum of elements in arr[0...5] after update is "<<getSum(BITree,5);
		
	return 0;
	}


