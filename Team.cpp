#include<bits/stdc++.h>
using namespace std;
int main(){
 
 int t;
 cin >> t;
 while(t--){

   int n;
   cin>>n;

  vector<int> p(n),s(n);
   
   for(int i=0;i<n;i++){
      cin>>p[i]>>s[i];
   }
  
  vector<int> score(12);

  for(int i=0;i<n;i++){
    score[p[i]] = max(score[p[i]],s[i]);
  }
 int sum=0;
  for(int i=1;i<=8;i++){
sum+=score[i];
  }
 cout<<sum<<endl;
 }

}