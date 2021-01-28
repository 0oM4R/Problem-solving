#include <iostream>
using namespace std;
int main() {
  int T, N,P;
  cin>>T;
  while(T--){
      int arr[3651]={0},x,container,counter;
      cin>>N>>P;
      for(int i = 0; i < P; i++){
          cin>>x;
          container=x;
          while(x<=N){
              arr[x]=1;
              x+=container;
          }
      }
      counter=0;
      for(int i = 1; i <= N; i++){
          if( arr[i] == 1 && i%7 != 0 && i%7 != 6) counter++;
      }
      cout<<counter<<endl;
  }
    return 0;
}
