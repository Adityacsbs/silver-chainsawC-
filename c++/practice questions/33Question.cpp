#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll M =10000000007;
ll fact[1000001];

void factorial(){

	fact[0] =1;
	fact[1] =1;
	for(ll i = 2; i<= 10000000; i++)
	{
		fact[i] = i * fact[i - 1];
	}
}
int main(){
	factorial();
	ll t;
	cin >>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i = 0; i <n; i++){
			cin >> a[i];
		}
		ll ans = 0;
		for(ll i = 0; i < n; i++){
			ans +=fact[a[i]];
			ans %= M;
		}
		cout<<ans <<endl;
	}
	return 0;
}