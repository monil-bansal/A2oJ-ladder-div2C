#include <iostream>
using namespace std;
main(){
	int i=-1,m,n;
	cin >> n >> m;
	cout << (m=(m>n)?n:m)+1 << endl;
	while(i<m) cout <<  ++i << " " <<m-i-1 <<endl;
}