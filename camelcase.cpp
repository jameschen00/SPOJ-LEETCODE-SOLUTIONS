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
		int c=0;
	string s;
	cin>>s;
	char *str=new char[s.size()+1];
	memcpy(str,s.c_str(),s.size());
	for(int i=0;i<s.size();i++)
	{
		if(isupper(str[i]))
		{
			c++;
		}
	}
	cout<<(c+1);
	return 0;
	}

