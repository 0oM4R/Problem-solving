// https://www.urionlinejudge.com.br/judge/en/problems/view/1069 //

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,cont=0;
    cin>>n;
    while(n--)
    {
        stack<int>st;
        string x;
        cin>>x;
        cont=0;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='<'){
            st.push(x[i]);
            } else if( x[i] =='>' && !st.empty() && st.top() == '<' )
            {
                cont++;
                st.pop();
            } else continue;

        }
        cout<<cont<<endl;
    }
return 0;
}
