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
		
	ll t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		ll sum=pow(a,b);
		int last=sum%10;
		cout<<last<<endl;
	}
		return 0;
	}

