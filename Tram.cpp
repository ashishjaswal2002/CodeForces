#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)

using namespace std;
int main(){
 

 int n;
 cin>>n;
 int maxCapacity =-1,diff=0;
 for(int i=0;i<n;i++){
    int ai,bi;
    cin>>ai>>bi;
    
    diff-=ai;
    diff+=bi;
    maxCapacity = max(maxCapacity,diff);

 }
  
  cout<<maxCapacity<<" ";
 
 

}