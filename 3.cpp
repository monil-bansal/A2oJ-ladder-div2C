#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n,m;
	cin >> n >> m ;
	if(n>m+1) {
		cout << -1;
		return 0;
	}
	if(m>2*(n+1)){
		cout << -1;
		return 0;
	}
	bool o = m>=n;
	while(n>0 && m>0){

		if(!o){
			cout << 0;
			o = true;
			n--;
			continue;
		}
		if(m-2>=n){
			cout << 11;
			m-=2;
		}
		else{
			cout <<1;
			m-=1;
		}
		o = false;
	}
	while(m){
		cout<<1 ;
		m--;
	}	
	while(n){
		cout << 0;
		n--;
	}
	return 0;
}