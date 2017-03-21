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
using namespace std;
int main()
	{
	int n;
	cin>>n;
	int S[n];
	for(int i=0;i<n;i++)
	{
		cin>>S[i];
	}
	int m;
	cin>>m;
	int Q[m];
	for(int j=0;j<m;j++)
	{
		cin>>Q[m];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		
		if(S[i]!=Q[j])
		{
			cout<<S[i]<<endl;
			break;
			continue;
		}
	}
	}
	return 0;
	}

