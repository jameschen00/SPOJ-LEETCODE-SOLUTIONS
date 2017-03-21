#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    while(cin>>n,n!=42)
    {
        v.push_back(n);
    }
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();++it)
    {
    	cout<<*it<<endl;
	}
    return 0;
}
