//including library
#include <iostream>
using namespace std;
int hcf(int m,int n){
	//conditions
	//finding hcf
	if(n!=0){
	return hcf(n,m%n);}
	//if any munber is 0
	else{
	return m;}

}
int main(){
	int a,b;
	//asking for the two number
	cout<<"TYPE THE IST NUMBER : ";cin>>a;
	cout<<endl;
	cout<<"TYPE THE 2ND NUMBER : ";cin>>b;
	cout<<endl;
	//call for function the hcf
	cout<<"The hcf of the number "<<a<<" and "<<b<<" is "<<hcf(a,b)<<endl;
return 0;

}
