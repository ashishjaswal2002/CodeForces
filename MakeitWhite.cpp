#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
   
   TestCase{

      int n;
      cin>>n;
      string s;
      cin>>s;
       
      int miniLength =0;
      int low  =0;
      int high = s.length()-1;



       for(int i=0;i<s.length();i++){
          
          if(s[i]=='B'){
            break;
          }
          low++;
       }


       for(int i=s.length()-1;i>=0;i--){
          
          if(s[i]=='B'){
            break;
          }
          high--;
       }

    
     miniLength = high-low+1;

     cout<<miniLength<<"\n";
       

   }


}