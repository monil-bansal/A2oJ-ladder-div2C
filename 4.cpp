#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<long long,long long> > v;
	for(int i=0;i<n;i++){
		long long f,s;
		cin >>f >> s;
		v.push_back(make_pair(f,s));
	}
	sort(v.begin(),v.end());
	long long last = 0;
	for(int i=0;i<v.size();i++){
		long long bn = v[i].second;
		long long an= v[i].first;
		if(last<=bn){
			last = bn;
		}
		else{
			last = an;
		}
	}
	cout << last;
	return 0;
}

