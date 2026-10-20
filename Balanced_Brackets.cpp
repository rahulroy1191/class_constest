#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {  
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    if(st.empty()) return true;
    else return false;
}

int main() { 
  int n;
  cin>>n;
  while(n--){
    string s;
    cin >> s;
    if (isBalanced(s)) 
        cout << "YES\n";
    else 
        cout << "NO\n";
  }
    return 0;
}