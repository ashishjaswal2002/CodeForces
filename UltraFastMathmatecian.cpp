#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
  string a,b;
  cin>>a>>b;

  string ans ="";
  for(int i=0;i<a.length();i++){

     if(a[i]!=b[i]){
       ans.append("1");
     }else ans.append("0");
  }
  
  cout<<ans<<" ";

}