#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int withdraw;         //withdrawal amount
    float total, final;   //balance,final balance
	cin>>withdraw;
	cin>>total;
	if(withdraw%5==0 && total>=withdraw+0.5){
	        final=total-(withdraw+0.5);
	        cout<<final;
	}
	else{
	    cout<<total;
	}
	return 0;
}
