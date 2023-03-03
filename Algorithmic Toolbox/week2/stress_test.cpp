#include"bits/stdc++.h"
using namespace std;
#define ll long long

ll maxpairproduct(const vector<int>numbers)
{
	ll result=0;
	int n= numbers.size();
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j)
		{
			if((numbers[i]) * (numbers[j]) > result)
			{
				result = ( (numbers[i]) * (numbers[j]));
				}			
			}
		}
		return result;
}

ll MaxPairWiseProduct(const vector<int>& numbers)
{
	int n= numbers.size();
	
	int max_index1=-1;
	
	for(int i=0;i<n;++i){
		if((max_index1 ==-1 ) || (numbers[i]>numbers[max_index1]))
		max_index1=i;
	}
	
	int max_index2= -1;
	for(int j=0;j<n;++j)
	{
		if((numbers[j] != numbers[max_index1]) && ((max_index2==-1)|| (numbers[j]>numbers[max_index2] )))
		max_index2=j;
	}
	return((ll) (numbers[max_index1]) * (numbers[max_index2]));
}



int main()
{
	ios_base::sync_with_stdio(false);
	// stress test
	while(true)
	{
		int n= rand() %10 +2;
		cout<<n<<"\n";
		vector<int>a;
		for(int i=0;i<n;++i)
		{
			a.push_back(rand() % 100000);
		}
		for(int j=0;j<n;++j){
			cout<<a[j]<<" ";
		}
		cout<<"\n";
		ll res1= maxpairproduct(a);
		ll res2= MaxPairWiseProduct(a);
		if(res1!=res2){
			cout<<"wrong answar"<<"\n";
			break;
		}
		else cout<<"OK"<<"\n";
	}

	
	
	int n;
	cin>>n;
	vector<int>numbers(n);
	for(int i=0;i<n;++i)
	{
		cin>>numbers[i];
	}
	
	ll result= MaxPairWiseProduct(numbers);
	cout<<result<<"\n";
}