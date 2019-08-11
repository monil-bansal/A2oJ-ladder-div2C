#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long long> arr(n,0);
	long long s=0;
	for(int i=0;i<n;i++){
		long long x;

		cin >> x;
		arr[i]=x;
		s+=arr[i];
	}
	if(s%3){
		cout<<0;
		return 0;
	}
	long long l = 0;
	vector<int> wl;
	int i=0;
	while(i<n){
		l+=arr[i];
		if(l==s/3){ wl.push_back(i); 
			// cout << i << " " ;
		}
		i++;
	}
	// cout << endl;
	long long r = 0;
	vector<int> wr;
	int j = n-1;
	while(j>=0){
		r+=arr[j];
		if(r==s/3){ wr.push_back(j);
			// cout << j << " ";
		}
		j--;
	}
	// cout <<endl;
	long long ans = 0;
	i=0;
	j=wr.size()-1;
	while(i<wl.size()){
		int x = wl[i];
		while(j>=0 && wr[j]<=x+1) j--;
		if(j<0) break;
		
		ans+= j+1;
		i++;
	}
	cout << ans;
	return 0;
}