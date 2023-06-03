#include <iostream>
using namespace std;
	
int calcs(int b)
	{
	    int x=0,y;
	    y=b;
	    
	    while(y!=0)
	    {
	    x=x+y%10;                         
	    y=y/10;
	    }
	    
	   // if(x%2==0)
	   // {   
    //         b=b+1;
	   //     calcs(b);
	   // }
	   // else
	   // {
	   //     cout<<b<<endl;
	   // }
	   return x;
       
	   
	}

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    int yf;
	    cin>>n;
	    if(calcs(n)%2==calcs(n+1)%2){
	        cout<<n+2<<endl;
	    }else{
	        cout<<n+1<<endl; 
	    }
	    
	    
	}

	
	return 0;
}
