#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
  string a,b,c;
  cin>>a>>b>>c;

  string ans = a+b;
  sort(ans.begin(), ans.end());
  sort(c.begin(), c.end());

  if(ans.find(c)!= std::string::npos){
   cout<<"YES"<<"\n";
  }else{
   cout<<"NO"<<"\n";
  }

}