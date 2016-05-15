/*
for i=0 to n
	f=fibo(i)
	if(digits(f)==N)
		return i+1

*/

#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
	int a=1,b=1,c;
	if(n==0||n==1)
		return a;
	while(n>1){
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return b;
}

int digits(int n){
	int s=0;
	while(n!=0){
		s++;
		n/=10;
	}
	return s;
}

int main(){

	int T,N,f;
	int ans;
	cin>>T;
	while(T>0){
		cin>>N;
		for(int i=0;;i++){
			f=fibo(i);
			if(digits(f)==N){
				cout<<i+1<<endl;
				break;
			}
			
		}
		T--;
	}
	return 0;
}
		