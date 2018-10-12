//including library
#include <iostream>
using namespace std;
int fib(int n){
	//conditions
	if(n==1){
	return 0;}
	if(n==2){
	return 1;}
	//n the term of fibonacci sequence
	else{
	return fib(n-1)+fib(n-2);}
}


int main(){
	int a;
	//asking a number
	cout<<"Which term in Fibonacci sequence do you want?";
	cout<<endl;
	cin>>a;
	cout<<endl;
	//call for function
	cout<<"The "<<a<<"th term of Fibenocci sequence is "<<fib(a)<<endl;
return 0;

}
