#include <bits/stdc++.h>
using namespace std;
int f(int x){
	int temp=0;
	if(x==1) return 0;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			int var=0;
			// Hitting point -1
			int x1=i+2;
			int y1=j+1;

			if(x1>0 && y1>0 && x1<=x && y1<=x) var++;

			// Hitting point -2
			int x2=i+2;
			int y2=j-1;
			if(x2>0 && y2>0 && x2<=x && y2<=x) var++;

			// Hitting point -3
			int x3=i-2;
			int y3=j-1;
			if(x3>0 && y3>0 && x3<=x && y3<=x) var++;

			// Hitting point -4
			int x4=i-2;
			int y4=j+1;
			if(x4>0 && y4>0 && x4<=x && y4<=x) var++;


			int x5=i-1;
			int y5=j+2;
			if(x5>0 && y5>0 && x5<=x && y5<=x) var++;


			int x6=i-1;
			int y6=j-2;
			if(x6>0 && y6>0 && x6<=x && y6<=x) var++;


			int x7=i+1;
			int y7=j-2;
			if(x7>0 && y7>0 && x7<=x && y7<=x) var++;


			int x8=i+1;
			int y8=j+2;
			if(x8>0 && y8>0 && x8<=x && y8<=x) var++;

			temp+=x*x-var-1;
		}
	}
	return temp/2;
}
int main(){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cout<<f(i)<<endl;
}