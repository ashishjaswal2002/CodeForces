/*Problem TWO

A. Is your horseshoe on the other hoof?
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Valera the Horse is going to the party with friends. He has been following the fashion trends for a while, and he knows that it is very popular to wear all horseshoes of different color. Valera has got four horseshoes left from the last year, but maybe some of them have the same color. In this case he needs to go to the store and buy some few more horseshoes, not to lose face in front of his stylish comrades.

Fortunately, the store sells horseshoes of all colors under the sun and Valera has enough money to buy any four of them. However, in order to save the money, he would like to spend as little money as possible, so you need to help Valera and determine what is the minimum number of horseshoes he needs to buy to wear four horseshoes of different colors to a party.

Input
The first line contains four space-separated integers s1, s2, s3, s4 (1 ≤ s1, s2, s3, s4 ≤ 109) — the colors of horseshoes Valera has.

Consider all possible colors indexed with integers.

Output
Print a single integer — the minimum number of horseshoes Valera needs to buy.





PROBLEM LINL: https://codeforces.com/problemset/problem/228/A



*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    
    
      int s1,s2,s3,s4;
      cin>>s1>>s2>>s3>>s4;

      vector<int> v;

      v.push_back(s1);
      v.push_back(s2);
      v.push_back(s3);
      v.push_back(s4);
      sort(v.begin(), v.end());
      int needstoBuy =0;
      for(int i=1;i<v.size();i++) {

         if(v[i]==v[i-1]){
           needstoBuy++;
         }
          
      }


   cout<<needstoBuy<<endl;



}