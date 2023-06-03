#include <iostream>
using namespace std;

int main() {
	int n, days;
	cin>>n;
	for(int x = 0; x<n; x++) {
	    cin>>days;
	    int chef[days], chefina[days], streak[days], a = 0;
	    for(int i = 0; i<days; i++) {
	        cin>>chef[i];
	    }
	    for(int j = 0; j<days; j++) {
	        cin>>chefina[j];
	    }
	    for(int k = 0; k<days; k++) {
	        streak[k] = 0;
	        if(chef[k] != 0 && chefina[k] != 0){
	            a++;
	        }
	        else {
	            streak[k] = a;
	            a = 0;
	        }
	        if(a == days){
	            streak[k] = a;
	        }
	    }
	    int max = streak[0];
	    
        for(int b = 1; b < days; b++) {
            if(streak[b] > max) {
                max = streak[b];
            }
    	}
    	if(a <= max) {
    	    cout<<max<<endl;
    	}
    	else{
    	    cout<<a<<endl;
    	}

    
	}	
	return 0;
}
