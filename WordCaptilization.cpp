#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {

  string s;
  cin >> s;
   
   string temp ="";

   for(int i=0;i<s.length();i++) {
       
       if(i==0) {
          temp+=toupper(s[i]);

       }else{
        temp+=s[i];
       }

   }

   cout<<temp<<"\n";

}
