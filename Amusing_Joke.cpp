#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string t = a+b;
    sort(t.begin(),t.end());
    sort(c.begin(), c.end());
    if(t == c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}