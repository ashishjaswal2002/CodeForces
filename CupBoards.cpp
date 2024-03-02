#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
#define N int n;cin>n;
using namespace std;
int main(){
 
   int n;
   cin>>n;
   
    
  vector<pair<int,int> > v;

  for(int i=0;i<n;i++){
    int li,ri;
    cin>>li>>ri;
    v.push_back(make_pair(li,ri));
  }


   
    int count0 = 0;
    int count1 =0;

    for(auto x:v){
        if(x.first==0){
            count0++;
        }
        if(x.first==1){
            count1++;
        }
    }

    int count02 = 0;
    int count01 =0;

    for(auto x:v){
        if(x.second==0){
            count02++;
        }
        if(x.second==1){
            count01++;
        }
    }
       
       int need1 =0;
       int need2 =0;

       if(count0>count1){
         need1 = 0;
       }else{
        need1 = 1;

       }

       if(count02>count01){
          need2 =0;
       }else need2 = 1;

   int t =0;
       for(auto x:v){
         
         if(x.first!=need1){
           t++;
         }

         if(x.second!=need2){
            t++;
         }
       }
     
     cout<<t<<" ";
    
   
}