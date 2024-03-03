#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)

using namespace std;
int main(){
 
   

   long long n;
  cin>>n;

  int firstContest;
  cin>>firstContest;
  int maxi = firstContest;
  int mini = firstContest;
  int count =0;
  while(--n){
      
      int nextContest;
      cin>>nextContest;

      if(nextContest>maxi){
        maxi = nextContest;
        count++;
      }
     
     if(nextContest<mini){
        mini = nextContest;
        count++;
     }
  }


cout<<count<<"";







}