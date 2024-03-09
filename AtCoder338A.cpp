#include<bits/stdc++.h>

using namespace std;

bool isUp(char s){
  
   char c = toupper(s);

   if(c==s){
    return true;
   }

   return false;

}

bool check(string s){

    char ch = s[0];

    if(!isUp(ch)){
        return  false;
    }

  for(int i=1;i<s.size();i++){
     char ch = s[i];
     if(isUp(ch)){
        return false;
     }
  }
  return true;


}
int main(){
  
  string s;
  cin>>s;
  if(check(s)){
    cout<<"Yes";
  }else{
    cout<<"No";
  }

}