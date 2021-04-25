#include <vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int vp=0,vd=0;

double dest (double time ,double &dp,double &dd,bool d0){
    dp+=time*vp;
    if(d0) {
        dd += time * vd;
    }else dd=0;
    return dp;
}
int main() {
    int f,t,ans=0,c;
    double dp=0,dd=0;
    cin>>vp>>vd>>t>>f>>c;
    dest(t,dp,dd,0);
    //calculating the distance of prences after t

    while( dest(dp/(abs(vp-vd)),dp,dd,1)<c&&vp<=vd){
        //if the dragon catch princess while after moving out the cave the princess needs to drop bijou
        ans++;
        dest((dd/vd),dp,dd,0);
        dest(f,dp,dd,0);

    }
    cout<<ans;
    return 0;
}