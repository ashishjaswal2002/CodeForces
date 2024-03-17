#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;

int solveans(string&s1,string&s2){
    for(int i=0;i<s1.size();i++){

       char c1= s1[i],c2= s2[i];
       if(c1==c2){
        continue;
       }
       else if(c1>c2){
        return 1;
       }else return -1;
  }


  return 0;
}

int main(){
 
  string s1,s2;
  cin>>s1;cin>>s2;
  
  for(auto & c : s1) c = tolower(c);
  for(auto & c : s2) c = tolower(c);
cout<<solveans(s1,s2);


}