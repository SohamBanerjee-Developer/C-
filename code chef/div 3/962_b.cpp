#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,n,k,factor,grid[n][n], reduced[factor][factor];
    factor=n/k;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>n>>k;
        for(int j=0;j<n;j++){
            for(int p=0; p<n; p++){
                cin>>grid[j][p];
            }
        }
    }
    for(int i=0;i<test;i++){
        
        for(int j=0;j<factor;j++){
            for(int p=0; p<factor; p++){
                reduced[j][p]=grid[j*k][p*k];
            }
        }
    }
    cout<<reduced[factor][factor];
    return 0;
}