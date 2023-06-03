#include<iostream>
#include<string>
using namespace std;
int main(){
	int n, sum=0, temp, len,m;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	for(int i=0; i<n; i++){
	    //cout<<arr[i]<<endl;      check1
	    temp=arr[i];
	    string str=to_string(arr[i]);
	    len=str.length();
	    //cout<<len<<endl;         check1
	    while(temp>0){
	        m=temp%10;    
            sum=sum+m;    
            temp=temp/10; 
	    }
	    cout<<sum<<endl;
	    sum=0;
	}
	return 0;
}
