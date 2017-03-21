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
	int N;
	cin>>N;
	while(N--)
	{
	int x,y;
	cin>>x>>y;
	int sum=0;
	if(x%2==0 && y%2==0)
	{
		sum=x+y;
		cout<<sum<<endl;
	}
	else if(x%2==1 && y%2==1)
	{
		sum=x+y-1;
		cout<<sum<<endl;
	}
	else
		cout<<"No Number";
	}
	return 0;
	}


