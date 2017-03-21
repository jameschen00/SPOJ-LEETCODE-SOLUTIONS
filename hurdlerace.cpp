#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int c;
    c=0;
    vector<int>::iterator it;
    for(it=height.begin();it!=height.end();++it)
    {
       if(*it>k)
           c++;
    }
    cout<<c;
    return 0;
}

