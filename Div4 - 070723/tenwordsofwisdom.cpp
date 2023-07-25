#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b;
    cin>>t;
    int maxi=0;
    int winning=0;
    while(t--){
        maxi=0;
        winning=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a<=10) {
                if (b > maxi) winning = i+1;
                maxi = max(maxi, b);
            }
        }
        cout<<winning<<endl;
    }
}