#include<bits/stdc++.h>
using namespace std;
#define TestCase int t; cin>>t; while(t--)
int main(){
TestCase{
 
  int a,b;
  cin>>a>>b;//10 4
  
  
  if(a%b==0){
    cout<<0<<"\n";

  }else{
    int r = a%b;
    int ans = b-r;
    cout<<ans<<"\n";
  }

}

}