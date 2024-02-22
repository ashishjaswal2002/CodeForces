#include <bits/stdc++.h>
#include <cctype>
using namespace std;

bool isUpperCase(char s) {
  char t = toupper(s);
  if (s == t) {
    return true;
  }

  return false;
}
int main() {

  string s;
  cin >> s;
  int lowerCaseCount = 0;
  int upperCaseCount = 0;
  for (int i = 0; i < s.length(); i++) {
    if (isUpperCase(s[i]) == true) {
      upperCaseCount++;
    } else {
      lowerCaseCount++;
    }
  }
  string result = s;
  if (lowerCaseCount >= upperCaseCount) {

    for (auto &c : result) {

      c = tolower(c);
    }

    cout << result << "\n";
  } else {
    for (auto &c : result) {
      c = toupper(c);
    }

    cout << result << "\n";
  }
}
