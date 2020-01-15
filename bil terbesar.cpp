#include <iostream>
using namespace std;
int main ()
{
	int bila,bilb,bilc;
	cout<<"masukan bilangan a="<<endl;cin>>bila;
	cout<<"masukan bilangan b="<<endl;cin>>bilb;
	cout<<"masukan bilangan c="<<endl;cin>>bilc;
	
	if (bilb<bila && bila>bilc)
	{
		cout<<"bil a terbesar"<<endl;
	}	
	else if (bila<bilb && bilb>bilc)
	{
		cout<<"bil b terbesar"<<endl;
	}		
	else 
	{
		cout<<"bil c terbesar"<<endl;
	}
	system ("PAUSE");
}
