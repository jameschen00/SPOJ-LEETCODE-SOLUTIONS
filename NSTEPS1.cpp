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
	int x,y,r,t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(x==y)
		{
			if(x%2==0)
				r=2*x;
			else
				r=2*x-1;
		cout<<r<<endl;
		}
		else if(x==y+2)
		{
			if(x%2==0)
				r=x+y;
			else
				r=x+y-1;
			cout<<r<<endl;
		}
		else
			cout<<"No Number"<<endl;
	}
	return 0;
	}

