#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<string, pair<int, string>> person[n];
    for(int i=0;i<n;i++){
        cin>> person[i].first>>person[i].second.first>>person[i].second.second;
        cout<< person[i].first<<" "<<person[i].second.first<<" "<<person[i].second.second<<"\n";
    }
    return 0;
}