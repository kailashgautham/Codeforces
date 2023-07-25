#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int n,k;
    int a=0;
    int prev=-1;
    int q;
    vector<int> inputs;
    while(t--){
        a=0;
        prev=-1;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>q;
            inputs.push_back(q);
        }
        sort(inputs.begin(), inputs.end());
        int longest=0;
        int curr=1;
        for(int i=0;i<n-1;i++) {
            if(abs(inputs[i]-inputs[i+1]) <= k) curr += 1;
            else {
                longest = max(longest, curr);
                curr=1;
            }
        }
        longest = max(longest, curr);
        cout<<(n-longest)<<endl;
        inputs.clear();
    }
}