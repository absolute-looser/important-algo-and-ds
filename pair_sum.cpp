#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,s;cin>>n>>s;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int i=0;int j =n-1;
		while(i<j)
		{
			int sum = arr[i]+arr[j];
			if(sum==s)
			{
				cout<<"Pair Found "<<arr[i]<<' '<<arr[j]<<endl;continue;
			}
			else if(sum>s)
				j--;
			else
				i++;
		}
		cout<<"Not Foundn\n";
	}
}