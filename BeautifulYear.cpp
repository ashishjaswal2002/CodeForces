#include <bits/stdc++.h>
#define TestCase \
    int t;       \
    cin >> t;    \
    while (t--)
#define BhaiN \
    int n;    \
    cin >> n;
using namespace std;
int main()
{
  
  BhaiN{
    
    while(true){

    n++;
    int ans = n;

     int a = n%10;//last Digit.
     n = n/10;//198

     int b = n%10;
     n  = n/10; //19


     int c = n%10;
     n  = n/10; //1
     int d = n%10;

     if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        cout<<ans<<" ";
        break;
     }else{
         n = ans;
        ans++;
     }
    }


  }
    
}