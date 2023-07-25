#include <iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    int n,m,h;
    for(int i=0;i<t;i++){
        cin>>n>>m>>h;
        vector<vector<int> > times;
        for(int j=0;j<n;j++){
            vector<int> timeInd;
            int x;
            for(int k=0;k<m;k++) {
                cin>>x;
                timeInd.push_back(x);
            }
            std::sort(timeInd.begin(), timeInd.end());
            times.push_back(timeInd);
        }
        vector<int> scores;
        vector<int> penalties;
        vector<int> equalScoreIndices;
        for(int j=0;j<n;j++){
            int penalty=0;
            int totalTime=0;
            int score=0;
            for(int k : times[j]) {
                if(totalTime + k <= h) {
                    totalTime += k;
                    penalty = penalty + totalTime;
                    score += 1;
                } else break;
            }
            scores.push_back(score);
            penalties.push_back(penalty);
        }
        int peopleBetter=0;
        for(int j=1;j<n;j++){
            if(scores[j] > scores[0]) peopleBetter += 1;
            else if(scores[j] == scores[0]) equalScoreIndices.push_back(j);
        }
        for(int j : equalScoreIndices) {
            if(penalties[j] < penalties[0]) peopleBetter += 1;
        }
        cout<<peopleBetter + 1<< endl;
    }
}