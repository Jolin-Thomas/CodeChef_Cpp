#include<iostream>
using namespace std;
int main(){
    int n, k, x, kount=0;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x%k==0){
            kount++;
        }
    }
    cout<<kount;
    return 0;
}