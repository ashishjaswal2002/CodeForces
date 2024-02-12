#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

  int arr[5][5];

  for(int i=0;i<5;i++){

    for(int j=0;j<5;j++)
     
     cin>>arr[i][j];
  }

  
  



   int ans [5][5] = {{4,3,2,3,4},
                     {3,2,1,2,3},
                     {2,1,0,1,2},
                     {3,2,1,2,3},
                     {4,3,2,3,4}};

   int index =0;
   int index2 =0;
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++)
     if(arr[i][j]==1){
        index = i;
        index2 = j;
        break;
     }
   }
 
 int  moves = ans[index][index2];

  
  cout<<moves<<"\n";
 

   


}