#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    int n;
    bool found=false;
    for(int i=0;i<t;i++){
        found = false;
        cin>>n;
        for(int k=2;k<=n;k++){
            if((k * (k+1) + 1) > n) break;
            int num = k + 1;
            int unconnected = k;
            while(num <= n) {
                num += unconnected * k;
                unconnected = unconnected * k;
                if (num == n && num >= k * (k + 1) + 1) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}