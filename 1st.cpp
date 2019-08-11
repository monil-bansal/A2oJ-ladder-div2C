#include <bits/stdc++.h>
using namespace std;


int main(){
	int m,s;
	cin >> m >> s;
	int t  =s;
	if(m==0){
		cout << "-1 -1";
		return 0;
	}
	if(s==0){
		if(m==1){
			cout << "0 0";
			return 0;
		}
		cout << "-1 -1";
		return 0;
	}
	if(m==1){
		if(s>9){
			cout << -1 << " " <<-1;
		}
		else{
			cout << s << " " << s;
		}
		return 0;
	}
	vector<int> ans(m);
	for(int i=0;i<m;i++){
		if(s==1){
			if(i==m-1) ans[i] = s; 
			continue;
		}
		if(i==m-1){
			if(s>9){
				cout << -1 << " " << -1;
				return 0;
			}
			ans[i] = s;
			break;
			
		}
		ans[i] = min(9,s-1);
		s -= ans[i];
	}
	for(int i=0;i<m;i++){
		cout << ans[m-1-i];
	}
	cout << " ";
	ans.clear();
	ans.resize(m);
	for(int i=0;i<m;i++){
		if(t==0) continue;
		ans[i] = min(9,t);
		t-=ans[i];
	}
	for(int i=0;i<m;i++){
		cout << ans[i];
	}
	return 0;
}