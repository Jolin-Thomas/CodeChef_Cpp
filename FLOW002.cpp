#include <bits/stdc++.h> 
using namespace std;

int main() {
	int n, a, b, r;
	cin>>n;
	for(int i=1; i<=n; i++){
	    cin>>a>>b;
	    r=a%b;
	    cout<<r<<endl;
	}
	return 0;
}