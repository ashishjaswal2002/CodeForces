#include<bits/stdc++.h>
using namespace std;
int main(){
 
   string s;

  cin>>s;

  char max =0;int counter =0;

  for(int i=0;i<s.length();i++){
      if(max<s[i]){
        max = s[i];
        counter =1;
      }
     else if(max==s[i]){
        counter++;
      }  
  }

   for(int i=0;i<counter;i++){
     cout<<max;
   }

}