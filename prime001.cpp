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
	for(ll i=0;i<q;i++)
	{
		ll a,b,temp;int flag;
		cin>>a>>b;
		if(a>b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		if(a==1)
			a++;
		while(a<b)
		{
			flag=0;
			for(ll i=2;i<a/2;++i)
			{
				if(a%i==0)
					{
						flag=1;
						break;
					}
					
			}
			if (flag==0)
				cout<<a;
		++a;
		a++;
		}
	}
	return 0;
	}

