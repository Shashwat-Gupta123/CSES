#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	ll prev;
	ll next;
	ll ans=0;
	for(int i=0;i<n;i++){
		ll t;
		if(i==0){
			cin>>t;
			prev=t;
		}
		else{
			cin>>t;
			next=t;
			if(next<prev){
				ans+=prev-next;
				next=prev;
			}
			else{
				prev=next;
			}
		}
	}
	cout<<ans<<endl;
}