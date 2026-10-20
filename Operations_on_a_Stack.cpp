#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    stack<long long>st;
    for(int i=1; i<=n; i++){
        if(i%2!=0 && i>2){
            st.pop();
        }
        else{
            st.push(v[i]);
        }
    }
   
    
    return 0;
}