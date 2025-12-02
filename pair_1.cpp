#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<string,int>person[n];
    for(int i=0;i<n;i++){
        cin>>person[i].first>>person[i].second;
    }
    for(int i=0;i<n;i++){
        cout<<person[i].first<<" "<<person[i].second; 
        cout<<"\n";
    }
    return 0;
}