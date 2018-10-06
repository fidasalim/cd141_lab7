//including library
#include <iostream>
using namespace std;
int sum(int n){
	//conditions
	if(n==0){
	return 0;}
	//adding the sum of the digits of the number
	else{
	return n%10 + sum(n/10);}

}
int main(){
	int n;
	//asking a number
	cout<<"type a number : ";cin>>n;
	cout<<endl;
	//call for function
	cout<<"The sum of the digits of the number "<<n<<" is "<<sum(n)<<endl;
return 0;

}
