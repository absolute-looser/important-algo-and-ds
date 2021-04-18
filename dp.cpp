#include<bits/stdc++.h>
using namespace std;
void knapsack(vector<vector<int>>&v,int pa[],int wa[],int row,int column)
{
	for(int i=1;i<row;i++)
	{
		for(int k=1;k<column;k++)
		{
			if(wa[i-1]<=k)
			{
				v[i][k] = max(pa[i-1]+v[i-1][k-wa[i-1]],v[i-1][k]);
			}
			else
			{
				v[i][k] = v[i-1][k];
			}
		}
	}
}
int main()
{
	int w;cin>>w;
	int size;cin>>size;
	int wa[size];int pa[size];
	for(int i=0;i<size;i++)
		cin>>wa[i];
	for(int i=0;i<size;i++)
		cin>>pa[i];
	vector<vector<int>>v(size+1,vector<int>(w+1,0));
	knapsack(v,pa,wa,size+1,w+1);
	cout<<v[size][w]<<endl;
}