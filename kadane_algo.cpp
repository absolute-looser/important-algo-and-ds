#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,total,temp;
	vector<int> arr;
	cin>>t;
	while(t--){
		cin>>n;
		arr.resize(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		total = arr[0];
		temp =0;
		for(int i=0;i<n;i++){
			
			{
				temp+=arr[i];
				if(temp>total)
					total= temp;
				if(temp<0)
					temp = 0;
			}
		}
		cout<<total<<endl;
	}
}