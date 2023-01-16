// NUMCON - HOÀNG TIẾN
#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
 
char buf[1000];
vector<string> vs;
 
int cmp(string a, string b) {
	return a + b > b + a;
}
 
int main() {
	while(gets(buf) != NULL) {
		if(buf[0] != 0) {
			string s = "";
			for(int i=0; buf[i] != 0; ++i)
                if('0' <= buf[i] && buf[i] <= '9') s += buf[i];
			        vs.push_back(s);
		}
	}
	for(int i=0;i<vs.size();++i)
		for(int j=i+1;j<vs.size();++j)
			if(cmp(vs[j],vs[i]))
				swap(vs[i], vs[j]);
	for(int i=0;i<vs.size();++i) 
        cout << vs[i] ;
	return 0;	
}







