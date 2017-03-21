#include<iostream>
#include<vector>
using namespace std;
int main()
	{
		int N;
		cin>>N;
		int x;
		cin>>x;
		int a,b;
		cin>>a>>b;
	vector<int> v;
	for(int i=0;i<N;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	
	v.erase(v.begin()+x);
	v.erase(v.begin()+a,v.begin()+b);
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		v.pop_back();
		cout<<v[i];
	}
	return 0;
	}

