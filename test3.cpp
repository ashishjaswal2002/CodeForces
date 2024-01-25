#include <iostream>
#include <string>
using namespace std;

  int longestCommonSubsequence(string text1, string text2) {
        
        if(text1.find(text2)!=std::string::npos){
            return text2.length();
        }

        return 0;


    }


int main() {
    std::string ans = "abcde";
    std::string ans2 = "abc";

    cout<<longestCommonSubsequence(ans,ans2);

    return 0;
}
