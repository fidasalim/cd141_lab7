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
	int z=int (reverse(m));cout<<endl;
	if (z==m){
	cout<<"The number "<<m<< " is palindromic"<<endl;
}
	else{
	cout<<"The number "<<m<< " is not palindromic"<<endl;
}
return 0;

}
