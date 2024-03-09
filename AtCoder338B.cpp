#include<bits/stdc++.h>
using namespace std;
#define TestCase int t; cin>>t; while(t--)
#define N int n;cin>n;
int main(){
  
  string s;
  cin>>s;

  map<char,int> hs;
  for(int i=0;i<s.size();i++){
      char ch = s[i];
      hs[ch]++;
  }

 int maxFreq = INT_MIN;
 char prevAppeared = '\0';
  for(auto x:hs){

  if(maxFreq<x.second){
    maxFreq = x.second;
    prevAppeared = x.first;
  }  
  }

  cout<<prevAppeared;


}