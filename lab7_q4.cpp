//include library
#include <iostream>
using namespace std;
//function inside a function
int sum(int i){
	if(i==0){
		return 0;	
	}
	else {
	return i+sum(i-1);
	}
}


int main (){
	int n;
	cout<<"Enter a number: ";cin>>n;
	cout<<"The sum of the natural number to "<<n<<" is "<<sum(n)<<endl;
	return 0;
}

