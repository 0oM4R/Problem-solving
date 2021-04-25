#include <vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
   int n,m,nAns=0;
   cin>>n >>m;
   int arrL ,arrR ,ans[101]={0};
    for (int i = 0; i < n; i++) {
        cin>>arrL>>arrR;
        for (int j = arrL; j <= arrR; j++) {

            ans[j]=1;
        }
    }
    vector <int>vAns;
    for (int i = 1; i <=m; ++i) {
        if (ans[i]==0){
            vAns.push_back(i);
            nAns++;
        }
    }
    cout<<nAns<<endl;
    for (int i = 0; i < nAns; ++i) {
        cout<<vAns[i];
        if(i!=nAns-1)cout<<" ";
    }
    return 0;
}