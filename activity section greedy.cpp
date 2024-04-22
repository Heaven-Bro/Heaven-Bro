#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> activity;
    for(int i=0; i<n; i++){
        int start, end;
        cin>>start>>end;
        activity.push_back({start, end});
    }
    sort(activity.begin(), activity.end(), [&](vector<int> &a, vector<int> &b){
        return a[1] <b[1];
    });
    int count = 1;
    int end = activity[0][1];
    for(int i=1; i<n; i++){
        if(activity[i][0] >= end){
            count++;
            end = activity[i][1];
        }
    }
    cout<<count<<endl;
    return 0;
}