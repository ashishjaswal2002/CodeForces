#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
   int n;
   cin>>n;
  
    string s = "";
    for(int i=1;i<=n;i++){
        char c ;
        cin>> c;
        s+=c;
    }


  int needToRemove =0;
    for(int i=1;i<s.size();i++){
         
         if(s[i-1]==s[i]){
            needToRemove++;
         }

    }

  cout<<needToRemove<<"\n";

}