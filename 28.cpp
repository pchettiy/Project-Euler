#include<bits/stdc++.h>
using namespace std;

long long eval(long long N){
	long long K=2,s=1;
	vector<long long> v;
	while(K<=N-1){
		for(int i=1;i<=4;i++)
		{	
			s+=K;
			v.push_back(s);
		}
		K+=2;
	}
	long long sum=0;
	s=v.size();
	for(long long i=0;i<s;i++)
		sum+=v[i];

	return sum;
}
int main(){
	long T;
	long long K=2,N;
	cin>>T;
	while(T>0){
		cout<<T<<endl;
		cin>>N;
		cout<<eval(N)<<endl;
		T--;
	}
	return 0;
}
		