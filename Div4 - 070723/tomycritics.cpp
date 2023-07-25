#include<bits/stdc++.h>
// GNU C++20 (64)
using namespace std;
int main(){
    int t;cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        if(a+b>=10||b+c>=10||a+c>=10)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}