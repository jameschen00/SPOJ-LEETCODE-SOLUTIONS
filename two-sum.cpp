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
	vector<int>nums;
	cout<<"Given nums=";
	int x;
	while()
	{
		cin>>x;
		nums.push_back(x);
	}
	int target;
	cout<<"target=";
	cin>>target;
	
	ll t=nums.size();
	while(t--)
	{
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]+nums[t]==target && i!=t)
			{
				cout<<i<<t;
			}
		}
	}
	return 0;
	}

