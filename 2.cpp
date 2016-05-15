#include<iostream>
using namespace std;
//fibonaci 

int fibonaci(int n){
	int c=0;

	int a=1,b=2;
	int sum=b;
	c=a+b;
	while(n>=b){
		a=b;
		b=c;
		if(b%2==0)
			sum+=b;
		c=a+b;
	}
	return sum;
}
int main(){

	int t,n;
	cin>>t;
	while(t>=0){
		cin>>n;
		cout<<fibonaci(n)<<endl;
		t--;
	}
	return 0;
}
		