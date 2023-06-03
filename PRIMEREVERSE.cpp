#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin>>n;
	while(n--){
	    int ones=0, ones2=0, zeros=0, zeros2=0, count=0;
	    cin>>x;
	    char str1[x], str2[x];
	    cin>>str1;
	    cin>>str2;
	    for(int i=0; i<x; i++){
	        if(str1[i]=='1'){
	            ones++;
	            if(str2[i]=='1'){
	                count++;
	            }
	        }
	        else{
	            zeros++;
	            if(str1[i]=='0'){
	                if(str2[i]=='0'){
	                    count++;
	                }
	            }
	        }
	        
	        if(str2[i]=='1'){
	            ones2++;
	        }
	        else{
	            zeros2++;
	        }
	    }
	    if((ones==ones2 && zeros==zeros2) && count){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	    
	}
	return 0;
}
