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
	int n,m;
	cin>>n>>m;
	vector<ll>f(n);
	for(int i=0;i<n;i++)
	{
		cin>>f[i];
	}
	sort(f.begin(),f.end());
	vector<ll>count(50);
	for(int i=0;i<50;i++)
	{
		count[i]=0;
	}
	int i=0;
	while(i<50 && f[i]==f[i+1])
	{
		count[i]=count[i]+1;
		i++;
	}
	i=0;
	int c=0;
	while(i!=50 || count[i]!=m)
	{
		c=0;
		i++;
	}
	if(c=0)
	{
		sort(count.begin(),count.end());
		std::vector<ll>::iterator low;
		low=std::lower_bound(count.begin(),count.end(),m);
		
		int z=low-count.begin();
		cout<<(m-count[z]);
		
	}
	else
	{
		cout<<0;
	}
	return 0;
	}


