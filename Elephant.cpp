#include<bits/stdc++.h>
using namespace std;
int main(){
 
   int x;
   cin>>x;

  
  int steps = 5;

  steps = x/steps; 


 if(x%5>0){
    steps++;
 }

cout<<steps<<" ";

return 0;



}