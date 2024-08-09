#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	string s;
	cin>>s;
	int t=1;
	int ans=INT_MIN;
	for(int i=1;i<s.length();i++){
		if(s[i]==s[i-1]) t++;
		else{
			ans=max(ans,t);
			t=1;
		}
	}
	ans=max(ans,t);
	cout<<ans<<endl;
}