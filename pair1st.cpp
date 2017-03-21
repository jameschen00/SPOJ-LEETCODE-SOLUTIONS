#define ll long long int
#include<iostream>
#include<vector>
#include<utility>
#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
		if(a.first<=b.first)
			return true;
		else
			return false;
}
	
int main()
	{
		int n,i,x,y;
		cout<<"Enter the no. of pairs:";
		cin>>n;
	vector<pair<ll,ll> >v;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),cmp);
	for(i=0;i<n;i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	return 0;
	}
	
