//include library
#include <iostream>
using namespace std;
//function inside a function
int number(int i,int n){
	//providing condition
	if (i==n+1 || i==n+2){
	return 0;}
	else {
		cout<<i<<endl;
		i+=2;
		return number(i,n);}	
}

int main (){
	int n,i;
	//asking the user for a number
	cout<<"Enter a natural number : ";
	cin>>n;
	//the odd number are given
	cout<<"The odd numbers are :"<<endl;number(1,n);
	//the even numbers are given
	cout<<"The even numbers are: "<<endl;number(2,n);
return 0;
}

