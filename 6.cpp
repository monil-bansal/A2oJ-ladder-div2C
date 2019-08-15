#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long r,g,b;
	cin >>  r >> g >> b;
	long long s = r+g+b;
	cout << min(s/3,min(r+g,min(r+b,b+g)));
	return 0;
}