#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin>>n;
	for(int i=0; i<n; i++){
	    cin>>x;
	    if(x<4){
	        cout<<"MILD"<<endl;
	    }
	    else{
	        if(x>=7){
	            cout<<"HOT"<<endl;
	        }
	        else{
	            cout<<"MEDIUM"<<endl;
	        }
	    }
	}
	return 0;
}
