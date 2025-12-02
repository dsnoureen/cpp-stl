#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<string,int>person[n];
    for(int i=0;i<n;i++){
        string name;
        int age;
        person[i].first=name;
        person[i].second=age;
        cin>>person[i].first>>person[i].second;
        cout<<person[i].first<<" "<<person[i].second<<"\n";
    }
    return 0;
}