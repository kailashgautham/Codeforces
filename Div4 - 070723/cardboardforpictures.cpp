#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    cout<<setprecision(15);
    long double n,c,d;
    while(t--){
        cin>>n>>c;
        long double area1;
        long double area2;
        long double squared=4*n;
        long double onePower=0;
        long double coeff=0;
        for(int i=0;i<n;i++){
            cin>>d;
            coeff+=(d*d);
            onePower += (2*2*d);
        }
        coeff -= c;
        area1 = (-(onePower) + sqrt(pow(onePower, 2) - (4*squared*coeff))) / (2*squared);
        area2 = (-(onePower) - sqrt(pow(onePower, 2) - (4*squared*coeff))) / (2*squared);
        cout<<max(area1,area2)<<endl;
    }
}