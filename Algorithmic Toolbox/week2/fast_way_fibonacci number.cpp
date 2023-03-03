#include"bits/stdc++.h"
using namespace std;
int Fiblist(int &n)
{
	int F[n+1];
	F[0]=0;
	F[1]=1;
	for(int i=2;i<=n;i++)
	{
		F[i] = F[i-1] + F[i-2];
	}
	return F[n];
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	cout<<Fiblist(n)<<"\n";
	//if you want to see fibonacci digit then remove "//" of the next line
	// 	for(int i=0;i<n;i++) cout<<Fiblist(i)<<" ";   

}