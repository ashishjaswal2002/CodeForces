#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
   
   int n;
   cin>>n;
   int count =0;
   for(int i=1;i<=n;i++){
    string s;
    cin>>s;
     if(s=="++X" || s=="X++"){
        count++;
     }
     else if(s=="--X" || s=="X--"){
        count--;
     }
   }
   cout<<count;
}