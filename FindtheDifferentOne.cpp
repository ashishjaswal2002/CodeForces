#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
  TestCase{
    
    int m,n,k;
    cin>>m>>n>>k;


    set<int>arr1;
    set<int>arr2;

    for(int i=0;i<m;i++){
        int num;
        cin>>num;
      arr1.insert(num);
    }


    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr2.insert(num);
    }

    //2 3 8 5 6 
    //1 3 4 10 5

  }

}