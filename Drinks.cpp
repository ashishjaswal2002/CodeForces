#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
   int n;
   cin>>n;

  vector<double> v(n);
  for(int i=0; i<n; i++){
   double num;
    cin>>num;
    v[i] = num;
  }
  // total sum of all elements/size
double sum=0.0;
 for(double x:v){
  sum+=x;

 }
 
  double ans = (sum/n);

  cout<<fixed<<setprecision(12)<<ans<<"\n";
  return 0;

  

}