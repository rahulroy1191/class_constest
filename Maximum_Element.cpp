#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    stack<long long>st;
    stack<long long>st2;
   
    while (t--)
    {
        int x,n;
        cin>>x;
        if(x==1){
            cin>>n;
            st.push(n);
            if(st2.empty() || n>=st2.top()){
                st2.push(n);
            }
            else {
                st2.push(st2.top());
            }
        }
        else if(x==2){
            if(!st.empty()){
                st.pop();
                st2.pop();
            }
        }
        else{
            if(!st2.empty()){
                cout<<st2.top()<<endl;
            }        }

    }
    
    return 0;
}
