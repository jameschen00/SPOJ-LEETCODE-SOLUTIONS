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
	 vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string s;
    cin >> s;
    int len=s.size();
    int c[s.size()];
    char *str=new char[s.size()+1];
	memcpy(str,s.c_str(),s.size());
	for(int i=0;i<s.size();i++)
	{
		int x=str[i];
		c[i]=x-97;
	}
	int max=h[c[0]];
	for(int i=1;i<s.size();i++)
	{
		if(h[c[i]]>max)
		{
			max=h[c[i]];
		}
	}
	cout<<(max*len);
	return 0;
	}


