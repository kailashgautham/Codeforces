#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<string>answers;
    vector<vector<char>> input;
    char c;
    int idxJ;
    string s;
    while(n--){
        s="";
        idxJ=0;
        input.clear();
        for(int i=0;i<8;i++){
            vector<char> v;
            for(int j=0;j<8;j++){
                cin>>c;
                if(c != '.') {
                    idxJ=j;
                }
                v.push_back(c);
            }
            input.push_back(v);
        }
        for(int j=0;j<8;j++){
            if(input[j][idxJ] != '.') s+=input[j][idxJ];
        }
        answers.push_back(s);
    }
    for(string y : answers)cout<<y<<endl;
}