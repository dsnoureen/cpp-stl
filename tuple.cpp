#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    tuple<string,int,string>person[n];
    for(int i=0;i<n;i++){
    cin>>get<0>(person[i])>>get<1>(person[i])>>get<2>(person[i]);
    cout<<get<0>(person[i])<<" "<<get<1>(person[i])<<" "<<get<2>(person[i])<<"\n";
    }
    return 0;
}