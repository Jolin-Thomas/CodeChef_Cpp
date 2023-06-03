#include <iostream>
using namespace std;

int main() {
	int n, item, x;
	cin>>n;
	for(int i=0; i<n; i++){
	    int sum=0;
	    cin>>item>>x;
	    int fres[item], cost[item];
	    for(int j=0; j<item; j++){
	        cin>>fres[j];
	    }
	    for(int k=0; k<item; k++){
	        cin>>cost[k];
	    }
	    
	    for(int l=0; l<item; l++){
	        if(fres[l]>=x){
	            sum+=cost[l];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
