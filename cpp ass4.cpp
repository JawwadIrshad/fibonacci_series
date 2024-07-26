
#include<iostream>
using namespace std;

void fib(int n,int a=0,int b=1){

	if(n>0){
		cout<<a<<" ";
		fib(n-1,b,a+b);
	}
	
}

int main(){
	int n;
	cout<<"enter the number";
	cin>>n;
	
	fib(n);
	return 0;
}