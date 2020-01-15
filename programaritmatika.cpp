#include <iostream>

using namespace std;

int main ()
	// Program Dasar by AbiPerdanaKusuma
{

float x,y,pertambahan,pengurangan,perkalian,pembagian;
cout << "Operasi Matematika Dasar" <<endl ;
cout << "Nilai x :" ;
cin >> x ;
cout << "Nilai y :" ;
cin >> y ;
cout <<endl ;
cout <<"std";

pertambahan = x+y ;
pengurangan = x-y ;
perkalian = x*y ;
pembagian = x/y ;

cout<<x<<"+"<<y<<"="<<pertambahan<<endl;
cout<<x<<"-"<<y<<"="<<pengurangan<<endl;
cout<<x<<"X"<<y<<"="<<perkalian<<endl;
cout<<x<<":"<<y<<"="<<pembagian<<endl;

return 0;
}
