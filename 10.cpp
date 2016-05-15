#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n){
	if(n==0|n==1)
		return false;
	if(n==2)
		return true;
	
	for(long i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
			
	}

	return true;
}
int main(){

	long T;
	long n,sum=0;
	cin>>T;
	while(T>0){
		cin>>n;
		for(long i=2;i<=n;i++)
			if(isPrime(i))
				sum+=i;
		cout<<sum<<endl;
		T--;
	}
	return 0;
}
		