#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int x;
    while (cin>>x)
    {
        v.push_back(x);
        /* code */
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i=1; i<v.size(); i++){
        cout<<'+'<<v[i];
    }

    
    return 0;
}