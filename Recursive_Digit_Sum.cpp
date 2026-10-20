#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll num(ll n){
    if(n<10)return n;
    ll rev = 0;
    while (n>0)
    {
        rev += n % 10;
        n = n/10;
        /* code */
    }
    return num(rev);
    
}
int main(){
    string s; ll k;
    cin>>s;
    cin>>k;
    ll sum  = 0;
    for(char c : s){
        sum += c-'0';
    }
    ll number = sum * k;
    ll result = num(number);
    cout<<result<<endl;
    
    return 0;
}