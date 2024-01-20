

#include<bits/stdc++.h>
using namespace std;
int main(){
 //Brute force approach
   int n,m;
   cin>>n>>m;
   
  int sum = n+m;//Add both so i can find maximum value..
  int pair =0;

  for(int i=0;i<sum;i++){

    for(int j=0;j<sum;j++){

        if((i*i+j)==n && (i+j*j)==m){
         pair++;

        }
    }
  }

  cout<<pair<<endl;






}   