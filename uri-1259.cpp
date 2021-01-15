#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin >>n ;
    vector <int> odd;
    vector <int> evn;
    while(n--)
    {
        cin>>x;
        if(x%2==0)evn.push_back(x);
        else odd.push_back(x);
    }
    sort(odd.begin(),odd.end(),greater<int>());
    sort(evn.begin(),evn.end());
    for(auto i:evn)cout<<i<<endl;
    for(auto i:odd)cout<<i<<endl;
    return 0;
}
