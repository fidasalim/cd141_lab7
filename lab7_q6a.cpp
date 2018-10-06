//including library
#include <iostream>
using namespace std;
int reverse(int n){
	//conditions
	if(n==0){
	return 0;}
	//reversing the number
	else{
	cout<<n%10;
	return reverse(n/10);}

}
int main(){
	int m;
	//asking a number
	cout<<"type a number : ";cin>>m;
	cout<<"The reverse of the number "<<m<<" is "<<reverse(m)<<endl;
return 0;

}
