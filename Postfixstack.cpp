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
#include<stack>
#include<cctype>
using namespace std;
int main()
	{
	int t;
	cin>>t;
	char str[1000];
	stack<char>s;
	while(t--)
	{
		cin>>str;
		int len=strlen(str);
		for(int i=0;i<len;i++)
		{
		 if(isalpha(str[i]))
		 	cout<<str[i];
		else
			if(str[i]==')'&& s.top()!=')')
			{
				cout<<s.top();
				s.pop();
			}
		else
			if(str[i]!=')')
				s.push(str[i]);
		}
		cout<<endl;
	}
	return 0;
	}

