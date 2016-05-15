#include<iostream>
using namespace std;

bool isPrime(long long number){
	if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(long long i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}

long long LargestPrimeFactor(long long n){
	long long i,ans;
	for(i=n;i>=2;i--){
		if(n%i==0){
			if(isPrime(i)){
				ans=i;
				break;
			}
		}
	}
	return ans;
}

int main(){

	int t;
	long long n;
	cin>>t;
	while(t>0){
		cin>>n;
		cout<<LargestPrimeFactor(n)<<endl;
		t--;
	}
	return 0;
}
		