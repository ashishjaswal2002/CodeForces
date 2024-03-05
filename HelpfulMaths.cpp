#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
  string s;
  
  cin>>s;
 vector<int>v;
  for(int i=0;i<s.size();i++){
      if(s[i]!='+'){
       v.push_back(s[i] - '0');
      }
  }
 
 sort(v.begin(),v.end());

 string ans="";
 for(auto x:v){
    ans+=to_string(x)+"+";
 }
 
 if(!ans.empty()){
   ans.pop_back();
 }

 cout<<ans;


}