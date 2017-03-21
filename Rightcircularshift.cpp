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
using namespace std;
int main()
	{
		int n,t;
		cout<<"Enter the size of the array :";
		cin>>n;
		cout<<"Enter the no. of times right circular shift to be done :-";
		cin>>t;
	int arr[n],i,j,k;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<(t%n);i++)
	{
		for(j=n-1;j<=0;j++)
		{
			int temp;temp=arr[0];
			arr[j+1]=arr[j];
		}
	}
	for(k=0;k<n;k++)
	{
		cout<<arr[i];
	}
	return 0;
	}

