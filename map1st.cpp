#define ll long long int
#include<iostream>
#include<map>
#include<utility>
using namespace std;
int max(int a,int b);
int main()
	{
	map<int,int>m;
	m[12]++;
	m[25]++;
	map<int ,int>::iterator pp;
	int ans=0;
	for(pp=m.begin();pp!=m.end();pp++)
	{
		ans=max(ans,(*pp).second);
	}
	for(pp=m.begin();pp!=m.end();pp++)
	{
		cout<<pp->first<<pp->second<<endl;
		
	}
	return 0;
	}
	int	max(int a,int b)
	{
		return(a<b)?b:a;
	}

