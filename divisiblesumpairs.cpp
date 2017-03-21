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
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int c=0;
	map<int,int>freq;
	for(int i=0;i<n;i++)
	{
		freq[a[i]%k]++;
	}
	for(int i=0;i<n;i++)
	{
		int rem=a[i]%k;
		if(2*rem==k)
		{
			if(freq[rem]%2 !=0)
			continue
		}
		else if(rem==0)
		{
			if(freq[rem]& 1)
			c++;
		}
		else if(freq[rem] != freq[k-rem])
			return false;
	}
	cout<<c;
	return 0;
	}

