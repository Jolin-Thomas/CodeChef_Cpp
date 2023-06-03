#include <bits/stdc++.h>
#include <set>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--) {
	    set<int> arr;
	    int ani, temp, koun, kount = 0;
	    cin>>ani;
	    temp = ani;
	    int type[ani];
	    while(ani--) {
	        cin>>type[ani];
	        arr.insert(type[ani]);
	    }
	    for(auto& str: arr) {
            koun = count(type, type+temp, str);
            if(koun%2 == 0) {
                continue;
            }
            else {
                kount++;
            }
        }
        if(kount == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
