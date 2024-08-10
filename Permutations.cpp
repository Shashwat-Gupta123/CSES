#include <bits/stdc++.h>
#define ll long long
using namespace std;
void print(vector<int>&arr){
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<1;
		return 0;
	}
	vector<int>arr(n,0);
	int s=1;
	int e=n;
	int t=0;
	while(s!=e && s!=e-1){
		arr[t]=s;
		t++;
		arr[t]=e;
		t++;
		s++;
		e--;
	}
	if(s==e){
		arr[t]=s;
		swap(arr[0],arr[t]);
		if(abs(arr[0]-arr[1])==1){
			cout<<"NO SOLUTION";
		}
		else{
			print(arr);
		}
	}
	else{
		// cout<<e<<endl;
		arr[t]=s;
		t++;
		arr[t]=e;
		swap(arr[0],arr[t-1]);
		if(abs(arr[0]-arr[1])==1){
			cout<<"NO SOLUTION"<<endl;
		}
		else{
			print(arr);
		}

	}
}