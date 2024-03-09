#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
  string a;
  cin>>a;
  bool willProduceOut = false;
  for(auto x:a){
    if(x=='H'||x=='Q'||x=='9'){
 willProduceOut = true;
 break;
    }
  }
 cout<<(willProduceOut?"YES":"NO")<<"\n";
}