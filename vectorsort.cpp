#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int N;
    cin>>N;
    vector<int>v;
    for(int i=0;i<N;i++)
        {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(vector<int>::iterator it=v.begin();it!=v.end();++it)
        {
        cout<<*it<<" ";
    }
    return 0;
}

