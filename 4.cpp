#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
	int rev=0,l=n;
	while(n!=0){
		rev=(rev*10)+(n%10);
		n/=10;
	}
	if(l==rev)
		return true;
		
	return false;
}
bool isThreeDigitMulti(int n){
	int l=100,r=999;
	int a=n;
	//Brute force
	for(;l<=r;l++){
		for(;r>=l;r--)
			if(l*r==a)
				return true;
		r=999;
	}

	return false;
}
int eval(int N){
	int ans=N;
	while(ans>0){
		if(isPalindrome(ans)){
			if(isThreeDigitMulti(ans))
				return ans;
		}
		ans--;
	}
	return -1;
}
int main(){

	int t;
	int n;
	cin>>t;
	while(t>0){
		cin>>n;
		cout<<eval(n)<<endl;
		t--;
	}
	return 0;
}
		