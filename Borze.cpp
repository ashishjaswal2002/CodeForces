#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
  string zero = ".";
  string one = "-.";
  string two ="--";

  string borzeCode;
  cin>>borzeCode;

   //.-.--
   // --.
   // -..-.--

   string ans = "";

   for(int i=0;i<borzeCode.length();){
     
      if(borzeCode[i]=='.'){
         
        ans+='0';
        i++;
      }

       if(borzeCode[i]=='-'){
          
          if(borzeCode[i+1]=='.'){
            ans+='1';
          }else{
            ans+='2';
          }
          i+=2;
       }

   }

    cout<<ans<<" \n";

      

 

}