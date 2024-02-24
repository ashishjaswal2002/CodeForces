#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
   long long n;
   cin>>n;
   
   long long count =0;



   while(n!=0){
     
      long long lastNo = n%10;
      if(lastNo==4 || lastNo==7){
         count++;
      }
      n = n/10;
   }


   if(count==4 || count==7){
    cout<<"YES"<<"\n";
   }else cout<<"NO"<<"\n";
   }
