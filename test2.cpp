#include<bits/stdc++.h>
using namespace std;
int main(){
 
 int n;
 cin>>n;
 int arr[n];

 for(int i=0; i<n; i++){
    cin>>arr[i];
 }


  unordered_map<int,int> mp;
  vector<int> v;

  for(int x:arr){
    
    v[x]++;

  }
  int maxi = INT_MIN;
  for(auto& x:mp){
   
    maxi = max(maxi,x.second);
  }
 
  //mini= 3
  int ans =0;
  for(auto& x:mp){
   if(x.first==maxi){
      ans = x.first;
      break;
   }
  }

  cout<<ans<<" ";
   
}

