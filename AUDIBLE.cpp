#include <iostream>
using namespace std;

int main() {
	int n, val1;
	cin>>n;
	for(int i=0; i<n; i++){
	    cin>>val1;
	    if(val1>=67 && val1 <=45000){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
