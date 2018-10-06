//include library
#include <iostream>
using namespace std;
//function inside a function
int sum(int i){
	//providing the conditions
	if(i==0){
		return 0;	
	}
	else {
	return i+sum(i-2);
	}
}


int main (){
	int n,a,b;
	//ask the user a number
	cout<<"Enter a number: ";cin>>n;
	if(n%2==0){
	//printing the sum of odd numbers
	cout<<"The sum of the odd number to "<<n<<" is "<<sum(n-1)<<endl;
	//printing the sum of even numbers
	cout<<"The sum of the even number to "<<n<<" is "<<sum(n)<<endl;
	}
	else{
	//printing the sum of odd numbers
	cout<<"The sum of the odd number to "<<n<<" is "<<sum(n)<<endl;
	//printing the sum of even numbers
	cout<<"The sum of the even number to "<<n<<" is "<<sum(n-1)<<endl;}
	
	return 0;
}

