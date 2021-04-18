#include<bits/stdc++.h>
using namespace std;
void phi_1_to_n(int phi[],int n){
	phi[0] = 0;
	for(int i =1;i<=n;i++)
		phi[i] = i;
	for(int i = 2;i<=n;i++){
		if(phi[i]==i){
			for(int j = i;j<=n;j+=i){
				phi[j] -= phi[j]/i;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	int a[n+1];
	phi_1_to_n(a,n);
	for(int i = 1;i<=n;i++){
		cout << a[i] << ' ';
	}
	cout << endl;
}