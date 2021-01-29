#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<int,int> m;
    int n,k,tmp;
    cin >> n >> k;
    bool flag=1;
    for(int i=1;i<=n;i++){

        cin >> tmp;
        flag = 1;
        for(auto x : m)
        {
            if(x.first==tmp){
                flag=0;
                break;
            }
            else continue;
        }
        if(flag){
            m[tmp]=i;
        }
    }

    if(m.size() >= k){
        cout<<"YES"<<endl;
         for(auto x=m.begin();x!=m.end()&&k!=0;x++)
        {
             k--;
            if(x != m.end() && x!=m.begin() ) cout<< " ";
            cout<<x->second;

        }
         cout<<endl;
    } else cout<<"NO"<<endl;
    return 0;
}
