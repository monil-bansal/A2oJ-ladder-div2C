#include <bits/stdc++.h>
using namespace std;

map<pair<int,bool>, long long> ma;
long long m = 1000000007;

long long doit(int n,int k,int d,bool c,int s){
	if(s==n && c)  return 1;
	if(s>=n) return 0;
	if(ma.find(make_pair(s,c))!=ma.end()) return ma[make_pair(s,c)];
	long long ans = 0;
	for(int i=1;i<=k;i++){
		if(i+s>n) break;
		if(i<d){
			ans = (ans%m + doit(n,k,d,c,s+i)%m)%m;
		}
		else{
			ans = (ans%m + doit(n,k,d,true,s+i)%m)%m; 
		}
	}
	ma[make_pair(s,c)] = ans;
	return ans;
}


int main(){
	int n,k,d;
	cin >> n >> k >> d;
	cout << doit(n,k,d,false,0);
	return 0;
}