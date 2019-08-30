#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	bool last = false;
	for(int i=0;i<s.length();){
		char c = s[i];
		int j = i;
		while(j<s.length() && s[j]==s[i]) j++;
		
		long long l = j-i;
		i=j;
		if(l==1){
			cout << c;
			last = false;
			continue;
		}
		else if(l>=2){
			if(last){
				cout << c;
				last = false;
				continue;
			}
			else{
				cout << c << c;
				last  = true;
				continue;
			}
		}
	}
	return 0;
}