#include<iostream>
using namespace std;
int main ( ){
	char huruf;
	cin>>huruf;
	if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'u' || huruf == 'o'){
		cout<<"vokal";
	}
	else{
		cout<<"konsonan ";
	}
	return 0;
}
