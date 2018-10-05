//include library
#include <iostream>
using namespace std;
//function inside a function
int number_Power(int base, int power){
	//conditions for the function to execute
	if(power==0){	
	return 1;}
	//this is similar to looping
	else {
	return base*number_Power(base,power-1);}}

int main (){
	int base; int power;
	//asking user for number
	cout <<"Enter the base : ";
	cin>>base;cout<<endl;
	cout <<"Enter the power : ";
	cin>>power;cout<<endl;
	//the result
	cout<<base<<"^"<<power<<" is "<</*callimg function*/number_Power(base,power)<<endl;
return 0;
}

