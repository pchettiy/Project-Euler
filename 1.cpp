#include<iostream>
#include<vector>
using namespace std;
//3 or 5 question
int sumOfAP(int n,int a,int d){
	return (n/2)*(2*a + (n-1)*d);
}

void sumOfmux(int n){
	long long s=0,i;
	
	for(i=3;i<n;i++){
		if(i%3==0||i%5==0){
			s+=i;
		}
		
	}
	

	cout<<s;
}


int main(){

	int t,k=0,n;
	vector<int> v;
	cin>>t;
	while(t>0){
		cin>>n;
		v.push_back(n);
		t--;
	}
	int s=v.size();
	for(int i=0;i<s;i++){
		sumOfmux(v[i]);
		cout<<endl;
	}
	return 0;
}