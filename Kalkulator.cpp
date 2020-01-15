#include <iostream>
using namespace std;
int main ()
{
	cout<<"======LOADING=======\n";
	for(int i=1;i<100;i+=5){
		cout<<"=";
	}
	cout<<endl;
	system("pause");
	system("cls");
	i:
	cout<<"\t\t\t\t============================\n";
	cout<<"\t\t\t\t=========KALKULATOR=========\n";
	cout<<"\t\t\t\t============================\n";
	
	int pilih;
	float a,b,hasil;
	int x,y,mod;
	char ulangi;
	
	cout<<"OPERASI :\n";
	cout<<"1. PENJUMLAHAN\n";
	cout<<"2. PENGURANGAN\n";
	cout<<"3. PEMBAGIAN\n";
	cout<<"4. PERKALIAN\n";
	cout<<"5. MODULUS\n\n";
	cout<<"PILIH OPERASI :";
	cin>>pilih;
	cout<<endl;
	switch (pilih)
	{
		case 1: 
		cout<<"=====PENJUMLAHAN=====\n";
		cout<<"MASUKAN NILAI a :";cin>>a;
		cout<<"MASUKAN NILAI b :";cin>>b;
		hasil =a+b;
		cout<<"Hasil :"<<hasil<<endl;
		break;
		
		case 2:
		cout<<"=====PENGURANGAN=====\n";
		cout<<"MASUKAN NILAI a :";cin>>a;
		cout<<"MASUKAN NILAI b :";cin>>b;
		hasil =a-b;
		cout<<"Hasil :"<<hasil<<endl;
		break;
		
		case 3:
		cout<<"=====PEMBAGIAN=====\n";
		cout<<"MASUKAN NILAI a :";cin>>a;
		cout<<"MASUKAN NILAI b :";cin>>b;
		hasil =a/b;
		cout<<"Hasil :"<<hasil<<endl;
		break;
		
		case 4:		
		cout<<"=====PERKALIAN=====\n";
		cout<<"MASUKAN NILAI a :";cin>>a;
		cout<<"MASUKAN NILAI b :";cin>>b;
		hasil =a*b;
		cout<<"Hasil :"<<hasil<<endl;
		break;
		
		case 5: 
		cout<<"=====MODULUS=====\n";
		cout<<"MASUKAN NILAI x :";cin>>x;
		cout<<"MASUKAN NILAI y :";cin>>y;
		mod = x%y;
		cout<<"Hasil :"<<mod<<endl;
		break;
		
		default :
		cout<<"!!!!! TIDAK ADA PILIHANNYA !!!!! ";
		break;
	}
			
	cout<<endl;
	cout<<"MAU ULANG ?? (Y/T) :";cin>>ulangi;
	
	if (ulangi=='Y'||ulangi=='y')
	{
		system("cls");
		goto i;
	}
	else
	{
		return 0;
	}
}

