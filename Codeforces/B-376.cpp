#include <iostream>
#include <map>
#include <vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
   int n,m,ctr=0;
   cin>>n>>m;
   int arr[n]={0};
   int owes ,owed ,money;
   while(m--){
       cin>>owes>>owed>>money;
       arr[owes-1]+=money;
       arr[owed-1]-=money;
   }
    for (int i = 0; i < n; ++i) {
        if(arr[i]<0){
            ctr+= abs(arr[i]);
        }
    }
    cout<<ctr<<endl;



    return 0;
}
