#include<bits/stdc++.h>
   #define TestCase int t; cin>>t; while(t--)

using namespace std;
int main(){
 
  int k,l,m,n,d;
  cin>>k>>l>>m>>n>>d;
  //k ddragon getig punch from the pan
  //l tail shit
  //m paws sharp heels
  //n nth dragon to call her mom
  // d total dragons

int count=0;
  for(int i=1;i<=d;i++){
     if(i%k==0 || i%l==0 ||i%m==0 || i%n==0){
        count++;
     }
  }

cout<<count<<"\n";

}