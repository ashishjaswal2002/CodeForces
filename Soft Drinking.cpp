#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)

using namespace std;
int main(){
  
     
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
 
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     int totalDrink = k*l;
     totalDrink = totalDrink/nl;
      
    int totalLimes = d*c;

    //p salt
    int totalSalt = p/np;

    int ans = min(min(totalDrink,totalLimes),totalSalt)/n;

    cout<<ans<<"\n";

     





}