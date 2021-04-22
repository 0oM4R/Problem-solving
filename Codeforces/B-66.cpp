    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        int n ,cnt=1,crnt,after,before;
        cin>>n;
        int arr[n];
         vector<int> rslt;
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        for (int i = 0; i < n; ++i) {
            cnt=1;
            after = i + 1;
            before = i - 1;
            crnt=i;
            while (before >= 0 && arr[crnt] >= arr[before]) {
                cnt++;
                crnt--;
                before--;
            }

            crnt = i;
            while (after < n && arr[crnt] >= arr[after]) {
                cnt++;
                crnt++;
                after++;
            }
            rslt.push_back(cnt);
        }
        cout<<*max_element(rslt.begin(),rslt.end());

        return 0;
    }