//include library
#include <iostream>
using namespace std;
//function inside a function
int number(int i,int n){
	//PROVIDING THE CONDITIONS
	if (i==n+1){
	return 0;}
	else {
	cout<<i<<endl;
	i++;
	return number(i,n);}
	
}

int main (){
	int n,i;
	//ASKING THE USER
	cout<<"Enter a natural number : ";
	cin>>n;
	//CALL FOR FUNCTIONS
	number(1,n);
return 0;
}

