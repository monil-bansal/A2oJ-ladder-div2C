#include<bits/stdc++.h>
using namespace std;
	int n,a,i,l,r,d,p;

int main(){

	char s[1<<17];
	cin>>n>>p>>s;
	for(p=p>n/2?n-p+1:p;i<--n;a+=d>13?26-d:d){
		(d=abs(s[i++]-s[n]))?r=i,l=l?l:i:0;
	}
	cout<<(a?std::min(abs(p-l),abs(p-r))+r-l+a:0);
	
}