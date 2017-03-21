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
		vector<ll>v;
		int n,c=0;
		while(cin>>n && n!=0)
		{
			v.push_back(n);
		}
		vector<ll>::iterator it;
		it=v.begin();
		while(v.begin()!=v.end())
		{
			if(it==v.begin())
			{
				++it;
			}
			else
			{
				(*it)--;
				++it;
				(*it)--;
			}
		if(it==v.end())
		{
			it=v.begin();
			++it;
		}
		c++;
		}
	return 0;
	}


