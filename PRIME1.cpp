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
	int q;
	cin>>q;
	while(q--)
	{
		ll a,b;
		cin>>a>>b;
		if(a==1)
			a++;
		for(ll j=a;j<=b;j++)
		{
			int count=0;
			for(ll i=2;i<j;i++)
			{
				if(j%i==0)
					count++;
					
			}
			if(count==0)
				cout<<j<<endl;
		}
	}
	return 0;
	}

