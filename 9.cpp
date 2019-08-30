#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	int c = (n*m)/k;
	int e = (n*m)%k;
	int i = 0;
	int j = 0;
	bool right  = true;
	while(k--){
		int t = (k==0)?c+e:c;
		cout << t << " ";
		while(t--){
			cout << i+1 << " " << j+1 << " ";
			if(right && j<m-1){
				j++;
			}
			else if(right){
				i++;
				right = false;
			}
			else if(!right && j>0){
				j--;
			}
			else{
				i++;
				right = true;
			}
		}
		cout << endl;
	}
	return 0;
}