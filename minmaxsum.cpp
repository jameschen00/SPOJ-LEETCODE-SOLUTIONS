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

int main()
	{
	vector<ll>v(5);
	for(int i=0;i<5;i++)
	{
		cin>>v[i];
	}
	ll max_sum,min_sum;
	max_sum=0;min_sum=0;
	sort(v.begin(),v.end());
	for(int i=1;i<5;i++)
	{
		max_sum=max_sum+v[i];
	}
	for(int j=0;j<4;j++)
	{
		min_sum=min_sum+v[j];
	}
	cout<<min_sum<<"\t"<<max_sum;
	return 0;
	}

