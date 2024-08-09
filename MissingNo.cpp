#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	ll s=0;
	for(int i=0;i<n-1;i++){
		ll t;
		cin>>t;
		s+=t;
	}
	ll p=n*(n+1);
	// cout<<p<<endl;
	p/=2;
	// cout<<p<<endl;
	// cout<<s<<endl;
	cout<<p-s<<endl;
}