#include<bits/stdc++.h>
using namespace std;
int kGoodnessString(string s, int k) {
  int minOperations = 0, x = 0;
  for(int i = 0; i < s.size() / 2; i++) {
     if(s[i] != s[s.size() - i - 1]) {
         x++;
     }
  }

  if(x == k) {
      minOperations = 0;
  }
  else if(x > k) {
      minOperations = x - k;
  }
  else {
      minOperations = k - x;
  }
  return minOperations;
}
int main(){
    int t,n,k;
    cin>>t;
    cin>>n>>k;
    string s;
for(int i=0;i<n;i++){
    cin>>s[i];
}
for(int i=0;i<t;i++){
   cout<< kGoodnessString(s,k)<<endl;
    
}return 0;
}