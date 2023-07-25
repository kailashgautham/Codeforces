#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;
    int n=0;
    for(int i=0;i<t;i++){
        cin>>n;
        int na;
        int r;
        int total=0;
        for(int j=0;j<n;j++){
            cin>>na;
            cin>>r;
            if(na > r) total += 1;
        }
        cout<<total<<endl;
    }
}