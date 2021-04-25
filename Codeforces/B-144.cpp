#include <vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int rx[1009],ry[1009],r[1009],n;
int dist(int rX,int rY,int x,int y ){
    return pow((rX-x),2)+pow((rY-y),2);
}
bool check(int x,int y){
    for (int i = 0; i < n; ++i) {
        if(dist(rx[i],ry[i],x,y)<= pow(r[i],2)){
            return 0;
        }
    }
    return 1;
}
int main() {
    int xC1,yC1,xC2,yC2,ans=0;
    cin >>xC1 >>yC1 >>xC2 >>yC2>>n;
    //radiators x and y  and r

    for (int i = 0; i < n; ++i) {
        cin>> rx[i]>> ry[i]>> r[i];
    }
    for (int i = min(xC1,xC2); i <= max(xC1,xC2) ; ++i) {
        ans+=check(i,yC1)+ check(i,yC2);
    }
    for (int i = min(yC1,yC2)+1; i <= max(yC1,yC2)-1 ; ++i) {
        ans+= check(xC1,i)+ check(xC2,i);
    }
    cout<<ans<<endl;

    return 0;
}