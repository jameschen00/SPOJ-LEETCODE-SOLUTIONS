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
using namespace std;
ll pallin(ll a);
int main()
	{
		int t;
		cin>>t;
		ll k[t];
	for(int i=0;i<t;i++)
	{
		scanf("%lld",&k[i]);
	}
	for(int i=0;i<t;i++)
	{
		pallin(k[i]);
	}
	return 0;
	}
ll pallin(ll a)
{
	ll temp,s=0;
	while(temp!=a || a<10000)
	{
		a++;
		temp=a;
	while(a!=0)
	{
		s=s*10;
		s=s+a%10;
		a=a/10;
	}
	if(temp==a)
	{
		cout<<a;
		break;
	}
	}
		
}

