#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
#define long long ll;
using namespace std;
int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
   int n,t;
   cin>>n>>t;

  string str ;
  cin>>str;
   
   while(t){

      for(int i=1;i<str.length();i++){

         if(str[i-1]=='B' && str[i]=='G'){
            str[i-1] = 'G';
            str[i] = 'B';
            i++;
         }
      }


      t--;
    

   }
   
  

   cout<<str<<" ";

}