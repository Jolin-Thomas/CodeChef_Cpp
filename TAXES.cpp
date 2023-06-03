#include <iostream>
using namespace std;

int main() {
	int n, val1;
	cin>>n;
	for (int i=0; i<n; i++){
	    cin>>val1;
	    if(val1>100){
	        cout<<val1-10<<endl;
	    }
	    else{
	        cout<<val1<<endl;
	    }
	}
	return 0;
}
