#include <iostream>
using namespace std;

int main() {
	int n, x, y;
	cin>>n;
	while(n--) {
	    cin>>x>>y;
	    if(x > 10*y) {
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
