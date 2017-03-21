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
	vector<ll>v(3);
	for(int i=0;i<3;i++)
	{
		cin>>v[i];
	}
	ll sum=0,c=0;
	int i=0;
	while(i<3)
	{
		if(v[i]%3!=0)
		{
		c=c+v[i]%3;
		sum=sum+v[i]/3;
		}
		else
		{
			sum=sum+v[i]/3;
		}
		i++;
	}
	ll h=0;
	if(c%3!=0)
	{
	 h=c%3;
	 c=c/3;
	}
	else
		c=c/3;
	h=h/3;
	sum=sum+c+h;
	cout<<sum;
	return 0;
	}

