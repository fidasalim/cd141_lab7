//including library
#include <iostream>
using namespace std;
int fact(int n){
	//conditions
	if(n==0){
	return 0;}
	//factorial of the number in recursion
	else{
	return n*fact(n-1);}
}


int main(){
	int a;
	//asking a number
	cout<<"type a number : ";cin>>a;
	cout<<endl;
	//call for function
	cout<<"The factorial of the number "<<a<<" is "<<fact(a)<<endl;
return 0;

}
