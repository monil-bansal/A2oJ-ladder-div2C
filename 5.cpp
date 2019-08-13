#include <iostream>
using namespace std;

int main() {
	long long dp[100001]={0},i=0,n,k;
    cin>>n;
	for(;i<n;i++)cin>>k,dp[k]+=k;
	for(i=2;i<=100001;i++)dp[i]=max(dp[i-1],dp[i]+dp[i-2]);
	cout<<dp[i-1];
}