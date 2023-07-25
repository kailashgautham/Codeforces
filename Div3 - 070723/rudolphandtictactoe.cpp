#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=0;i<n;i++){
        vector<char> row1;
        vector<char> row2;
        vector<char> row3;
        char c;
        for(int j=0;j<3;j++) {
            cin>>c;
            row1.push_back(c);
        }
        for(int j=0;j<3;j++) {
            cin>>c;
            row2.push_back(c);
        }
        for(int j=0;j<3;j++) {
            cin>>c;
            row3.push_back(c);
        }
        char winner='.';
        if(row1[0]==row1[1]&&row1[1]==row1[2] && row1[0] != '.') winner = row1[0];
        if(row2[0]==row2[1]&&row2[1]==row2[2] && row2[0] != '.') winner = row2[0];
        if(row3[0]==row3[1]&&row3[1]==row3[2] && row3[0] != '.') winner = row3[0];
        if(row1[0]==row2[0]&&row2[0]==row3[0] && row1[0] != '.') winner = row1[0];
        if(row1[1]==row2[1]&&row2[1]==row3[1] && row1[1] != '.') winner = row1[1];
        if(row1[2]==row2[2]&&row2[2]==row3[2] && row1[2] != '.') winner = row1[2];
        if(row1[0]==row2[1]&&row2[1]==row3[2] && row1[0] != '.') winner = row1[0];
        if(row3[0]==row2[1]&&row2[1]==row1[2] && row3[0] != '.') winner = row1[2];
        if(winner == '.')cout<<"DRAW"<<endl;
        else cout<<winner<<endl;
    }
}