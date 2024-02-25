#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }
    if (x == 2) {
        return true;
    }
    if (x % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

string sol(int n,int m){
   n = n+1;
     if(isPrime(m)){
       
       for(int i=n;i<=m;i++){
         
         if(isPrime(i) && i==m){
            return "YES";
         }
         else if(isPrime(i) && i!=m){
            return "NO";
         }
       }

  }

  return "NO";
    

}

int main(){
 
   int n,m;
   cin>>n>>m;

   
   cout<<sol(n,m);

  


}